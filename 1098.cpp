#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//Sequence IJ 3
//hfjimenez...
//the secuence is repeated 3 times, and the ith number is 2n-1,
//jth number is the same ith + 6.
void casebase(){
  int i=0;
  for(int j=1;j<=3;j++)
    cout<<"I="<<i<<" J="<<j<<endl;

}
int main(){
fast;
double start=0.2,temp=1,increment=0;
casebase();
while(increment<2){
  for(double i=1;i<=3;i++){
    cout<<"I="<<increment<<" J="<<i+increment<<endl;    //0.2 0.2 0.2   1.2 2.2 3.2
  }
  increment+=0.2;
  //start+=increment;                               //
}

}
