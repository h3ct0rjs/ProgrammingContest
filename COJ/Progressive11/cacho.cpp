#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

void solve(vector<int> const &v){
    int tmp=0;
    for(int i=0;i<4;i++){
        if(v[i+1]==v[i]+1){
            tmp++;
        }
    }
    cout<<(tmp==4?"Y":"N")<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int T,x;
    cin>>T;
    while(T--){
        vector<int> v;
        for (int i = 0; i < 5; i++){ 
            cin>>x;
            v.push_back(x);
        }
    solve(v);
    }
}