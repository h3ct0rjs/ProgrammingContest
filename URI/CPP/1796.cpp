#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//hfjimenez@...
//Uri Online Judge...
int main(){
fast;
int tcitizens,count1=0, count0=0,val;
cin>>tcitizens;
while(tcitizens--){     //O(n)
    cin>>val;
    if(val==1)
      count1+=1;
    else
      count0+=1;
}
if(count0>count1)
  cout<<"Y"<<endl;
else
  cout<<"N"<<endl;
return 0 ;
}
