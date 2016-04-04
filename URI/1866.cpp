#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
//hfjimenez@utp.edu.co
//Math Problems, Uri online Judge.
using namespace std;

int main(){
fast;
int cases,c,s=0;
cin>>cases;
while(cases--){
cin>>c;
for(int i=0;i<c;i++){
  if(i%2==0)
    s+=1;
  else
    s-=1;
  }
  cout<<s<<endl;
  s=0;
}
}//eof main
