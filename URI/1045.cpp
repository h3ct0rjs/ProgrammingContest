#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
double a,b,c;
cin>>a>>b>>c;
if(a>=b+c){
  cout<<"NÃO FORMA TRIÂNGULO"<<endl;
}
else{
  if( (pow(a,2)) == ((pow(b,2)) + (pow(c,2))) ){
    cout<<"TRIÂNGULO RETÂNGULO"<<endl;
    }
  if(  (pow(a,2)) > ((pow(b,2)) + (pow(c,2)))  ){
    cout<<"TRIÂNGULO OBTUSÂNGULO"<<endl;
  }
  if(  (pow(a,2)) < ((pow(b,2)) + (pow(c,2)))  ){
    cout<<"TRIÂNGULO ACUTÂNGULO"<<endl;
  }
  if( a==b && b==c && c==a){
    cout<<"TRIÂNGULO EQUILÁTERO"<<endl;
  }
  if( a==b || b==c || c==a){
    cout<<"TRIÂNGULO ISÓSCELES"<<endl;
  }
}
return 0;
}
