#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//beginners problem
//Easy Game Time
//feedback hfjimenez...
int main(){
  fast;
  int start,end,hr;
  cin>>start>>end;
  if(end > start){
   hr = end - start;
   cout<<"O JOGO DUROU "<<hr<<" HORA(S)"<<endl;}
  else if(start>end){
      hr =24 - start+end ;
      cout<<"O JOGO DUROU "<<hr<<" HORA(S)"<<endl;
      }
  else if(start==end){
     cout<<"O JOGO DUROU 24 HORA(S)"<<endl;}
}
