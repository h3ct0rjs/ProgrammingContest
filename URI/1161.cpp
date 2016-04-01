#include <bits/stdc++.h>
using namespace std;
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);


long long factorial(int n)//RecursiveThis will only work if you don't have a time limit...and with small values.
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main(){
    fast;
    int m,n2;
    unsigned long long suma;
    while(cin>>m>>n2 && ((m&&n2)!=EOF)){
    suma=factorial(m)+factorial(n2);
    cout<<suma<<endl;
    }
    return 0 ;
}
