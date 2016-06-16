#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int testcases,x,ins=0,outs=0;
cin>>testcases ;
for(int i=1;i<=testcases;i++){
    cin>>x;
    if(x>=10 && x<=20){
      ins+=1;}
    else{
      outs+=1;}

}
cout<<ins<<" in"<<endl;
cout<<outs<<" out"<<endl;
return 0;
}
