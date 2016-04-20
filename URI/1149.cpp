#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
// hfjimenez...
// 1149	Summing Consecutive Integers
int main(){
fast;
int a, n,times=1,acc=0;cin>>a>>n;
if(n<0 || n==0)
  while(n<0 || n==0){
    cin>>n;
  }
for(int i=a;times<=n;i++){    //iterate to do the corresponding add.
  acc+=i;times++;
  }
cout<<acc<<endl;
}
