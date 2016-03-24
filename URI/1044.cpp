#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main(){
fast;
int a, b;
cin>>a>>b;
if ( a%b==0||b%a==0){
  cout<<"Sao Multiplos"<<endl;}
else{
  cout<<"Nao sao Multiplos"<<endl;
}
return 0;
}
