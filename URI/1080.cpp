#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(void){
int i,newvalue,max=0,position;
for(i=1;i<=100;i++){
  cin>>newvalue;
  if(max<newvalue){
  max=newvalue;
  position=i;
    }
}
cout<<max<<endl<<position<<endl;
return 0;
}
