#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;int t,i;
int x[1010];
cin>>t;
while(i<1000){
        for(int j=0;j<t;j++){
            x[i]=j;
            i++;
        }
    }
for(int i=0;i<1000;i++){
  cout<<"N["<<i<<"] = "<<x[i]<<endl;
}
return 0;
}
