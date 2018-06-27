#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
int x[10];     //create array of n positions.
for(int i=0;i<10;i++){
  cin>>x[i];      //fill the array. 0-99
}

for(int i=0;i<10;i++){
  if(x[i]<0|| x[i]==0){
    x[i]=1;
  }
}

for(int i=0;i<10;i++){
  cout<<"X["<<i<<"] = "<<x[i]<<endl;
}

return 0;
}
