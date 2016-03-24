#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int x,y,numberinline=1,i=1 ;
cin>>x>>y;
while(i<=y){
while(numberinline<=x){
  if(numberinline!=x){
  cout<<i<<" ";}
  else{
    cout<<i<<endl;
  }
  i++;              //number
  numberinline++;
  }
  numberinline=1;     //flush the counter of number per line.
}

}
