#include <bits/stdc++.h>
//DataStructures Problems
//feedback:hfjimenez@utp.edu.co
//Diamonds and Sand 1069.
#define endl '\n';
using namespace std;
int main(){
  int cases,tdiamond=0;
  string line;
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  cin>> cases;
  while(cases--){
    stack <char> d;
    tdiamond=0;
    cin>>line;
    int len=line.length();
    for(int i=0; i<len;i++){   //evaluate the line.
      if(line[i]=='<'){
          d.push(i);
        }
      if(!d.empty() && line[i]=='>')  {
        d.pop();
        tdiamond+=1;
      }
    }
    cout<<tdiamond<<endl;
  }
return 0;
}
