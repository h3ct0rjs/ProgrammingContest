#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int n,x,y ;
cin>>n;
while(n--){
  cin>>x>>y;
  int odd=0;
  if(x<y){
    for(int i=x+1;i<y;i++)
      if(i%2!=0)
        odd+=i;
  }
  else{
    for(int i=y+1;i<x;i++)
      if(i%2!=0)
        odd+=i;
    }
    cout<<odd<<endl;
  }

return 0;
}
