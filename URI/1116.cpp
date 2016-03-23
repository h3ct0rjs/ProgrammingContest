#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int n;
double x,y;
cin>>n;     //test cases.
while(n--){
  cin>>x>>y;      //reading the couple  of x,y pair.
  cout<<fixed;
  cout<<setprecision(1);  //set the number of digits
  if(y==0){
    cout<<"divisao impossivel"<<endl;
  }
  else{
    cout<<x/y<<endl;
  }
}
return 0;
}
