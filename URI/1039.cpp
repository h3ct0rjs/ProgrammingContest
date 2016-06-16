#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
  double r1,r2, x1,y1,x2,y2,d;
  fast;
while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
  d=sqrt(((x1-x2)*(x1-x2))+ ((y1-y2)*(y1-y2)) );    //distance between two points !
  if(r1>=d+r2){                                     //if the R1 of the first circle is greather or eaqul to the sum of r2 + distance,
    cout<<"RICO"<<endl;                             //we get the fire flowers
  }
  else{
    cout<<"MORTO"<<endl;
  }

}//eof while

return 0;
}
