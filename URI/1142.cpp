#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int lineastotales, cantidaddelineas=1,counter=1;
cin>>lineastotales;

while(cantidaddelineas<=lineastotales){

  while(counter%4!=0){
    cout<<counter<<" ";
    counter++;
  }
  cout<<"PUM"<<endl;
  counter++;
  cantidaddelineas++;
}

return 0;
}
