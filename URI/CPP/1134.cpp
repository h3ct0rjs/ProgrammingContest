#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//Type of Fuel, Gas station validation.
//1.Alcohol, 2.Gasolina, 3.Diesel, 4.End

int main(){
fast;
int fuelcode=0,calcohol=0,cgasoline=0,cdiesel=0;
while(cin>>fuelcode){     //read fuelcode
  if(fuelcode>4)          //validate fuel option.
    while(fuelcode>4){    //menawhile fuelcodeis >4 read a new number.
      cin>>fuelcode;
    }
  if(fuelcode==1)
    calcohol+=1;
  else if(fuelcode==2)
    cgasoline+=1;
  else if(fuelcode==3)
    cdiesel+=1;
  else
    break;
}
cout<<"MUITO OBRIGADO"<<endl
<<"Alcool: "<<calcohol<<endl
<<"Gasolina: "<<cgasoline<<endl
<<"Diesel: "<<cdiesel<<endl;
return 0;
}
