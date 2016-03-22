#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
double a,b,c,d,i,j;
cin>>a>>b>>c;
d=b+c;
  i=b*b+c*c;
  j=a*a;
  if(a>=d)
      printf("NAO FORMA TRIANGULO\n");
  else if(i==j)
      printf("TRIANGULO RETANGULO\n");
  else if(i<j)
      printf("TRIANGULO OBTUSANGULO\n");
  else if(i>j)
      printf("TRIANGULO ACUTANGULO\n");
  if(a==b && b==c)
      printf("TRIANGULO EQUILATERO\n");
  else if(a==b || b==c ||a==c)
      printf("TRIANGULO ISOSCELES\n");
  return 0;
return 0;

}
