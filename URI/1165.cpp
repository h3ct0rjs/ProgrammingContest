#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

bool isprimenumber(int n);    //prototype functions
int x,xi;                     //global vars.
int main(){
fast;
int n;
cin>>n;               //read test cases.
while(n--){           //meanwhile exist test cases
  cin>>x;             //read x, and determine if it is prime.
  if(isprimenumber(x))
    cout<<x<<" eh primo"<<endl;
  else
    cout<<x<<" nao eh primo"<<endl;
}

return 0;
}

bool isprimenumber(int n){
if(x<=1)           //base case
  return false ;
else if(x==2)      //obviously 2 is prime
  return true;
  xi=sqrt(x);      //we take the square root a iterate
  //from 3 to the result of square root of x, trying to find
  //divisibility.
  for(int i=3;i<=xi;i++)
    if(x%i==0)
       return false;    //it sends false if its no prime

  return true;
}
