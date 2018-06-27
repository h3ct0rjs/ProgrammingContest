#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main(){
int x;
fast;
while(cin>>x){
  for(int i=1;i<=x;i++){
    if(i!=x){
      cout<<i<<"*";
      }
    else{
      cout<<i<<endl;
  }
   }
}
return 0;
}
