#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//Sequence IJ 3
//hfjimenez...
//the secuence is repeated 3 times, and the ith number is 2n-1,
//jth number is the same ith + 6.
int main(){
fast;
int start=1,temp=7;     //start.
while(start<6){
  int k=2*start-1;
  for(int i=1;i<=3;i++){
    cout<<"I="<<k<<" J="<<temp<<endl;    //1 1 1; 3 3 3;5 5 5; 7 7 7
    temp--;
  }
  start++;                  //1 2 3 4 5
  temp=(2*start-1)+6;}
}
