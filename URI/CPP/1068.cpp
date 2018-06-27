#include <bits/stdc++.h>
//DataStructures Problems
//feedback:hfjimenez@utp.edu.co
//Parenthesis Balance I 1068.
#define endl '\n';
using namespace std;
int main(){
  int tparentesis,apertura,cierre;
  string line;
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  while(cin>>line){
    stack <char> d;
    tparentesis=0;
    apertura=0;
    cierre=0;
    for(int i=0; i<line.length();i++){   //evaluate the line.
      if(line[i]=='('){
          d.push(i);
          apertura+=1;
        }
      if(line[i]==')'){ //count the amount of close parenthesis
        cierre+=1;
      }
      if(!d.empty() && line[i]==')')  {
        d.pop();
        tparentesis+=1;
      }
    }
    cout<<(((apertura==tparentesis)  && (apertura==cierre))?"correct":"incorrect")<<endl;
  }
return 0;
}
