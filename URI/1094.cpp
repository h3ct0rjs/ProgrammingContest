#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int n, quantity=0,coelho=0,rato=0,sapo=0;
cin>>n;
char type;
for(int i=1;i<=n;i++){
  cin>>quantity>>type;
  if(type=='C')
    coelho+=quantity;
  else if(type=='S')
    sapo+=quantity;
  else
    rato+=quantity;
}
cout<<"Total: "<<sapo+rato+coelho<<" cobaias"<<endl;
cout<<"Total de coelhos: "<<coelho<<endl;
cout<<"Total de ratos: "<<rato<<endl;
cout<<"Total de sapos: "<<sapo<<endl;

double p1,p2,p3;
p1=double(coelho/double(sapo+rato+coelho))*100;
p2=double(rato/double(sapo+rato+coelho))*100;
p3=double(sapo/double(sapo+rato+coelho))*100;
cout<<fixed;cout<<setprecision(2);
cout<<"Percentual de coelhos: "<<p1<<" %"<<endl;
cout<<"Percentual de ratos: "<<p2<<" %"<<endl;
cout<<"Percentual de sapos: "<<p3<<" %"<<endl;
return 0;
}
