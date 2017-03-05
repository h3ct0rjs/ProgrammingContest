#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
int i,highest=0,highestanterior,position=0,positions=0;
fast;
while(cin>>i){
highest=max(i,highest);      //find the max between two numbers.
if(!highest==highestanterior)
    position=positions;
  positions++;
}
cout<<highest<<endl<<position<<endl;
return 0;
}
