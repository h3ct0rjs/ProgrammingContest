#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
double s=1,t=1,i=3;
s/=t;   //case base. 1

while(i<=39){
  t=t*2;
  cout<<i<<"/"<<t<<" ";
  s+=(i/t);
  i+=2;
}
cout<<fixed;cout<<setprecision(2);
cout<<s<<endl;
return 0;
}
