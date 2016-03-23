#include <bits/stdc++.h>

using namespace std;
//feedback: hfjimenez@utp.edu.co
int main(){
  int n ;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=2;j++){
      if(j==1){
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
      }
    else{
      cout<<i<<" "<<(i*i)+1<<" "<<(i*i*i)+1<<endl;
    }
  }
}
  return 0;
}
