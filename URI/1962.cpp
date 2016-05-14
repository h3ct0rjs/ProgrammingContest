#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//hfjimenez...
//A Long, Long Time Ago
/*
Input

The input has several lines. The first one has a positive integer number N (1 ≤ N ≤ 100000).
There are N lines after the first one. Each of these N lines has a single non negative integer T,
which indicates how many years have passed until 2015 AD (0 ≤ T < 231).

Output

The output has N lines. In each one there is the year A in which the correspondent time T had happened.
Look at the sample output
*/
int main(){
fast;
int n,current,t;
cin>>n;                 //
while(n--){
  cin>>t;
  if(t<2015){
    current=2015-t;
    cout<<current<<" D.C."<<endl;
  }
  else{
    current=t-2014;
    cout<<current<<" A.C."<<endl;
  }
  }
}
