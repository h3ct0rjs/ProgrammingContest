#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//Sequence IJ 2
//hfjimenez...
int main(){
fast;
int start=1,k=1,temp=8;
while(start<=5){
  k=(2*start)-1;
  for(int i=1;i<=3;i++){
    cout<<"I="<<k<<" J="<<temp-i<<endl; //1 1 1 7 6 5
  }
  start++;
  }
}
