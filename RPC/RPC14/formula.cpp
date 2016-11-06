#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

double distance(double x1,double y1,double x2, double y2){
  return sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
}
double radius (double a, double b, double c){
  return sqrt((4*a*a*b*b)-(a*a+b*b-c*c)*(a*a+b*b-c*c))/(2*(a+b+c));
}
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  double x, y;
  double incircler;
  double values[3][2];
  for(int i=0;i<3;i++){
    cin>>x>>y ;
    values[i][0]=x;
    values[i][1]=y;}
  cin>>incircler;
  double a= distance(values[0][0],values[0][1],values[1][0],values[1][1]);
  //cout<<a<<endl;
  double b=distance(values[1][0],values[1][1],values[2][0],values[2][1]);
  //cout<<b<<endl;
    double c=distance(values[0][0],values[0][1],values[2][0],values[2][1]);
  //cout<<c<<endl;
  cout << setprecision(5);
  cout<<((radius(a,b,c)-incircler)/incircler)*100<<endl;
   return 0;
}
