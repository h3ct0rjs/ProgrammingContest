#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
double value, array[100];
cin>>value;
for(int i=0;i<100.0;i++){
  if(i==0){
      array[i]=value;
  }
  else{
    array[i]=value;
  }
  value/=double(2.0000);
}

cout<<fixed;cout<<setprecision(4);
for(int j=0;j<100.0;j++){

  cout<<"N["<<j<<"] = "<<array[j]<<endl;
}




return 0;
}
