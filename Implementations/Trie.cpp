//trie
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

struct Node{
    map<char, Node*> edges;
    int counter;
    bool finished;
    Node(): counter(0),finished(false), edges(){}
};
/*
Node* Add(Node *node, string &cad, int id){
    if(node == nullptr) node = new Node();
    Node* next=nullptr;
    if(node->edges.count(cad[id])) 
        next = node->edges[cad[id]];
    node->edges[cad[id]] =Add(next, cad, id+1);
    return node;
}
*/
void Add2(Node* node, string &cad, int id){
    //cout<<cad<<endl; //debug
    node->counter++;
    if(id == cad.size()) {
        node->finished= true;
        return;
    }
    if(node->edges.count(cad[id])==0){
        //cout<<"id:"<<id<<" cadena:"<<cad[id]<<endl; // debug
        node->edges[cad[id]] = new Node();
    }
    //cout<<endl; //debug
    Add2(node->edges[cad[id]], cad, id+1);
}

bool IsConsistent(Node* node) {
    if (node->finished && (node->counter > 1)) return false;
    for (map<char, Node*>::iterator it = node->edges.begin(); it != node->edges.end(); it++) {
        if (!IsConsistent(it->second)) return false;
    }
    return true;
    // for (auto to : node->edges) {}
}

void FreeTree(Node* node) {
    if (!node) return;
    for (map<char, Node*>::iterator it = node->edges.begin(); it != node->edges.end(); it++) {
        FreeTree(it->second);
    }
    delete node;
}

int main(){
    size_t t,n;
    string cadena;
    cin>>t;
    size_t casex=1;
    while(t--){
        cin>>n;
        Node* root = new Node();
        for(size_t i=0;i<n;i++){
            cin>>cadena;
            Add2(root,cadena,0);
        }
        
        cout<<"Case "<<casex<<": "<<(IsConsistent(root)? "YES":"NO")<<endl;
        FreeTree(root);
        casex++;
    }
    return 0;
}
