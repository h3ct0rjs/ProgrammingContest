#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int l,slugi, slugspeed=0 ;
while(cin>>l){
  for(int i=0;i<l;i++){
    cin>>slugi;
    slugspeed=max(slugi,slugspeed);
  }
if(slugspeed<10)
		cout<<1<<endl;
 else if((slugspeed>=10) && (slugspeed<20))
		  cout<<2<<endl;
else if(slugspeed>=10)
		  cout<<3<<endl;
slugspeed=0;      //Nunca voy a olvidar como hacer un reset :/
//esto me costo puestos en el training. xX-/
}
return 0;
}
