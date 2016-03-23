#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main(){
fast;
int m,n ;       //undertermined number of pairs values, m , n.
while(cin>>m>>n && ( m>0 && n>0 ) ){  //stop when any of the stdin values is <=0
  int sum=0;                         //flush the acumulator.
  if(m<n){                          //ensure from the smallest to the biggest
    for(int i=m;i<=n;i++){
      sum+=i;
      cout<<i<<" ";
      }
      cout<<"Sum="<<sum<<endl;
  }
  else{                            //ensure from the smallest to the biggest
    for(int i=n;i<=m;i++){
      sum+=i;
      cout<<i<<" ";
      }
      cout<<"Sum="<<sum<<endl;
  }
}
return 0;
}
