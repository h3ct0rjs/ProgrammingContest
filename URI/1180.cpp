#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int n,pos=0,min=0;cin>>n;
int vectors[n];
for(int i=0;i<n;i++){
  cin>>vectors[i];
  if(vectors[i]<min){
    min=vectors[i];
    pos=i;
  }
}
cout<<"Menor valor: "<<min<<endl;
cout<<"Posicao: "<<pos<<endl;
return 0;
}
