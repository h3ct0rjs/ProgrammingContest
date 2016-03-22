#include <bits/stdc++.h>
#include <iomanip>      // std::setprecision
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
double a,b,c,c1,c2,c3,s,Area;
cin>>a>>b>>c;
c1=a+b;
c2=a+c;
c3=b+c;
if((c1>c) && (c2>b) && (c3>a) ){    //Teorema de la Desigualdad de triangulo. Verifica si es posible crear un triangulo.
  cout<<fixed<<setprecision(1);
  cout<<"Perimetro = "<<(a+b+c)<<endl;
}
else{
  Area=((a+b)/2)*c;
  cout<<fixed<<setprecision(1);
  cout<<"Area = "<<Area<<endl;
}
return 0;
}
