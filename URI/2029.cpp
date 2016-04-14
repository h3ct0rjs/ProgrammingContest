#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pi 3.14
using namespace std;
//feedback:hfjimenez@utp...
//calculate the volume and the diameter of the cylyndral container.
//show height, and the area of this container.
//the mathematical equations are found in the internet. just google it.
//simplifying height = volume/(pi*(diameter/2)^2)
//Area= 2πrh+2πr
//ToDo :
//calculate correctly the are.

int main(){
double volume, diameter,radius,area,height;
fast;   //use input and output optimizations.
while(cin>>volume>>diameter){
  radius=diameter/2.0;
  height=volume/(pi*(radius*radius));

  cout<<fixed;cout<<setprecision(2);
  cout<<"ALTURA = "<<height<<endl;
  cout<<"AREA = "<<area<<endl;
}

return 0;
}
