#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//Sequence IJ 3
//hfjimenez...
//the secuence is repeated 3 times, and the ith number is 2n-1,
//jth number is the same ith + 6.

int main(){
fast;
double increment=0;
while(increment<2){
  for(double i=1;i<=3;i++){
    cout<<"I="<<increment<<" J="<<i+increment<<endl;    //0.2 0.2 0.2   1.2 2.2 3.2
  }
  increment+=0.2;
}

}
