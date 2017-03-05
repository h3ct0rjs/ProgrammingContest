#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
//feedback: hfjimenez@utp.edu.co
//Math Problems

int main(){
	fast;
    long long hashmat,oponnent;
	while(cin>>hashmat>>oponnent && ((hashmat&&oponnent)!=EOF)){
    cout<<abs(hashmat-oponnent)<<endl;
    }
    return 0 ;
}

