#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int x, y;
cin>>x>>y;
if(x<y){
  for(int i=x;i<y;i++){
    if(i%5==2||i%5==3){
      cout<<i<<endl;
    }
  }
}
else{
  for(int i=y;i<x;i++){
    if(i%5==2||i%5==3){
      cout<<i<<endl;
    }
  }
}
return 0;
}
