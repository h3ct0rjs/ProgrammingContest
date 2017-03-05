#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

bool validate(double x){
  if(x>=0 and x<=10) return 1;
  else return 0;
}

int main(){
fast;
double s1, s2;
cin>>s1;
while(validate(s1)==0){
  cout<<"nota invalida"<<endl;
  cin>>s1;  }

cin>>s2;
while(validate(s2)==0) {
    cout<<"nota invalida"<<endl;
    cin>>s2;  }
cout<<fixed;
cout<<setprecision(2);
cout<<"media = "<<(s1+s2)/2.0<<endl;
}
