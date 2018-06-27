#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//hfjimenez...IJ4 ith increments in steps of 0.2, and jth is 1+steps of 0.2  2 3
int main(){
fast;
double increment=0;
while(increment<2){
  for(double i=1;i<=3;i++)
    cout<<"I="<<increment<<" J="<<i+increment<<endl;

  increment+=0.2;
  }
}
