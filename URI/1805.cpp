#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long ll;

int main(){
fast;
ll a, b,acu=0, acu2=0;
cin>>a>>b; //We avoid the iteration usage, to reduce the complexity from O(n) to Constant or logaritmic

if(a==1){
  acu=(b*(b+1))/2;
}

else{
  acu=(b*(b+1))/2;
  a=a-1;
  acu2=(a*(a+1))/2;
  acu=acu-acu2;
}
cout<<acu<<endl;
return 0;
}
