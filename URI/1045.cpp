#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//beginner problem
//tryangle types 1045.cpp
//feedback hfjimenez...

int main(){
  double a, b, c, x;
  fast;     //active flags for fast input/output.
  cin>>a>>b>>c;
  //sorting the a,b,c sides.
  if (a < b){
    x = a;
    a = b;
    b = x; }
  if (b < c){
    x = b;
    b = c;
    c = x; }
  if (a < b){
    x = a;
    a = b;
    b = x;
  }
  //Following the conditionals:
  if (a >= b + c){
    printf("NAO FORMA TRIANGULO\n");
    }
  else if (a * a == b * b + c * c){
    printf("TRIANGULO RETANGULO\n");
    }
  else if (a * a > b * b + c * c){
    printf("TRIANGULO OBTUSANGULO\n");
    }
  else if (a * a < b * b + c * c){
    printf("TRIANGULO ACUTANGULO\n");
    }
  if (a == b && b == c){
    printf("TRIANGULO EQUILATERO\n");
    }
  else if (a == b || b == c){
    printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
