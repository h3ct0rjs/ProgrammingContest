#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
int t,nflowers;
vector<int> flowers;
cin>>t;
while(t--){
    int tmp;
    cin>>nflowers;
    while(nflowers--){
        cin>>tmp;
        flowers.push_back(tmp);
    }
    for(auto i:flowers){
        cout<<i<<" ";
    }

}

}