#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;short n=15;int num=0;int posp=0,posi=0;
int par[5],impar[5];
while(n--){
  cin>>num;
  if(num%2==0){
    par[posp]=num;
    cout<<"par["<<posp<<"] = "<<par[posp]<<endl;
    posp++;
  }
  else{
  impar[posi]=num;
  cout<<"impar["<<posi<<"] = "<<impar[posi]<<endl;
  posi++;
  }
  if(posp==5)   posp=0;
  if(posi==5)   posi=0;
}
}
