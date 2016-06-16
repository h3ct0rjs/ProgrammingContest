#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n";
//1021, Banknotes and Coins
using namespace std;
void solve(long double n){
  double notas[6]={100, 50, 20, 10, 5, 2};
  double coins[6]={1, 0.50, 0.25, 0.10, 0.05,0.01};
  long long notasv=0,coinsv=0;
  long double tmp=n;
  cout<<fixed;
  cout<<setprecision(2); //fixed
  cout<<"NOTAS:"<<endl;
  for(int i=0 ;i<6;i++){
    notasv=tmp/notas[i];
    cout<<notasv<<" nota(s) de R$ "<<notas[i]<<endl;
    tmp-=(notasv*notas[i]);
  }
  cout<<"MOEDAS:"<<endl;
  for(int i=0 ;i<6;i++){
    coinsv=tmp/coins[i];
    cout<<coinsv<<" moeda(s) de R$ "<<coins[i]<<endl;
    tmp-=(coinsv*coins[i]);
    }
}
int main(){
  fast;
  long double n;
  cin>>n;
  solve(n);
}
