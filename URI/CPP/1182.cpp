#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//1182 Column array.
int main(){
fast;
int C=0;double add=0;string option;
cin>>C>>option;
double M[12][12];             //declare the matriz
for(int i=0;i<12.0;i++)       //fill the rows
  for(int j=0;j<12.0;j++)     //fill the cols
    cin>>M[i][j];             //fill the entire matriz

for(int i=0;i<12.0;i++)
  add+=M[i][C];               //just iterating over the rows. and a static col

if(option=="S"){
  cout<<setprecision(1);
  cout<<fixed;
  cout<<add<<endl;
}
else{
  cout<<setprecision(1);
  cout<<fixed;
  cout<<double (add/12.0)<<endl;
  }
}
