#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void Isprime(int N){    //This implemetantion is O(N), our worst case is 10^7
  int count = 0;
  for( int i = 1;i*i<= N;++i ){ //we just need to find if is there any other divisor from 1 to sqrt(n)
     if( N % i == 0) {
       if( i * i == N )
          count++;
      else              // i < sqrt(N) and (N / i) > sqrt(N)
          count += 2;
        }
  }
  if(count == 2)
      cout<<N<<" eh primo"<<endl;
  else
    cout<<N<<" nao eh primo"<<endl;
}

int main(){
  fast;
  int n,x=0;cin>>n;
  while(n--){
    cin>>x;
    Isprime(x);
  }
}
