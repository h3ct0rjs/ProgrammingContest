#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
  double salary;
  cin>>salary;

  if(salary<=400.00){
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"Novo salario: "<<(salary*0.15)+salary<<endl;
    cout<<"Reajuste ganho: "<<(salary*0.15)<<endl;
    cout<<"Em percentual: 15 %"<<endl;
  }
  else if(salary>=400.01 && salary<=800.00){
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"Novo salario: "<<(salary*0.12)+salary<<endl;
    cout<<"Reajuste ganho: "<<(salary*0.12)<<endl;
    cout<<"Em percentual: 12 %"<<endl;
  }
  else if(salary>=800.01 && salary<=1200.00){
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"Novo salario: "<<(salary*0.1)+salary<<endl;
    cout<<"Reajuste ganho: "<<(salary*0.1)<<endl;
    cout<<"Em percentual: 10 %"<<endl;
  }
  else if(salary>=1200.01 && salary<=2000.00){
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"Novo salario: "<<(salary*0.07)+salary<<endl;
    cout<<"Reajuste ganho: "<<(salary*0.07)<<endl;
    cout<<"Em percentual: 7 %"<<endl;
  }
  else{
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"Novo salario: "<<(salary*0.04)+salary<<endl;
    cout<<"Reajuste ganho: "<<(salary*0.04)<<endl;
    cout<<"Em percentual: 4 %"<<endl;
  }


return 0;
}
