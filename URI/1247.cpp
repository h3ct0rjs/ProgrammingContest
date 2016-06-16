#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
double d,vf,vg,tf,tg,x; //we use double because there are a few operations
//that give us decimal points
fast;
while(cin>>d>>vf>>vg){
  x=sqrt((12*12)+ (d*d));
  tf=12/vf;  tg=x/vg;     //from movimiento rectilineo v*t=x.
  if(tg>tf)
    cout<<"N"<<endl;
  else
    cout<<"S"<<endl;
}
return 0;
}
