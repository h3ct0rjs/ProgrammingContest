#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int lim1, lim2,acu=0;
cin>>lim1>>lim2;
if(lim1<lim2){
  for(int i=lim1;i<=lim2;i++){
    if(!(i%13==0))
      acu+=i;
  }
}
else{
  for(int i=lim2;i<=lim1;i++){
    if(!(i%13==0))
      acu+=i;
  }
}
cout<<acu<<endl;
return 0;
}
