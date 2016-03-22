#include <bits/stdc++.h>
#include <iomanip>      // std::setprecision
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
int n[10];     //create array of n positions.
int t;
cin>>t;
for(int i=0;i<10;i++){
  for(int j=0;j<t;j++){
    n[i]=j;
  }
}


for(int i=0;i<10;i++){
    cout<<"N["<<i<<"] = "<<n[i]<<endl;
}

return 0;
}
