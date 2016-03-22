#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int acu=0,n;
for(int i=1;i<=5;i++){
  cin>>n;
    if(n%2==0)
      acu+=1;
}
cout<<acu<<" valores pares"<<endl;
return 0;
}
