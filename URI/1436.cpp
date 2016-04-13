#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int t,n,suma=0;cin>>t;
for(int i=1;i<=t;i++){
  cin>>n;
  int agesplayer[n];
  for(int j=0;j<n;j++)  cin>>agesplayer[j];
  for(int j=0;j<n;j++)  suma+=agesplayer[j];
  cout<<fixed;cout<<setprecision(0);
  cout<<"Case "<<i<<": "<<double(suma)/double(n)<<endl;
  suma=0;
}
}
