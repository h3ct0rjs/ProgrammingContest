#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;
int totalstudents,regnumber,winreg=0;
double note,base=0;
cin>>totalstudents;
while(totalstudents--){
  cin>>regnumber>>note;
  if(note>base){
    base=note;
    winreg=regnumber;
  }
}
if(!(base>=8.0))
  cout<<"Minimum note not reached"<<endl;
else
  cout<<winreg<<endl;
return 0;
}
