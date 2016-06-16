#include <bits/stdc++.h>
using namespace std;
//prototype functions
void winner(int x,int y);
int r(int x,int y );
int b(int x,int y );
int c(int x,int y );
int main(){
int n,x,y; cin>>n;
for(int i=1;i<=n;i++){
    cin>>x>>y;
    winner(x,y);
  }
}

void winner(int x,int y){
int rafa,beto,carlos;
  rafa=r(x,y);
  beto=b(x,y);
  carlos=c(x,y);
  if(rafa>beto and rafa>carlos)     //this could be done with max(user,user1,user2) but we were forgeting the name :(
    cout<<"Rafael ganhou"<<endl;    //this also could be done with multiple ternary operator!!
  else if(beto>rafa and beto>carlos)
    cout<<"Beto ganhou"<<endl;
  else
    cout<<"Carlos ganhou"<<endl;
}
int r(int x,int y ){
  return( ((3*x)*(3*x))+(y*y));
}

int b(int x, int y){
  return( (2*(x*x))+ ((5*y)*(5*y)) );
}
int c(int x,int y ){
  return ((-100*x)+(y*y*y));
}
