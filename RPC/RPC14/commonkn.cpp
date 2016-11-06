#include <bits/stdc++.h>
#define endl "\n";
using namespace std;


long long solve(int n){
  return (pow(4,n)*pow(2,n));
}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n ;
  cin>>n;
  cout<<solve(n)<<endl;
return 0;
}
