#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
//Strings, LED 1168
//hfjimenez@utp.edu.co
//1:2,2:5,
int mapper(char review){
  map<char,int> mymap;
  map<char,int>::iterator it;
  mymap['0']=6;
  mymap['1']=2;
  mymap['2']=5;
  mymap['3']=5;
  mymap['4']=4;
  mymap['5']=5;
  mymap['6']=6;
  mymap['7']=3;
  mymap['8']=7;
  mymap['9']=6;
  return mymap.find(review)->second;  //complexity o(log n)
}
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n; cin>>n;
  while(n--){
    long long acu=0 ;
    string linex;
    cin>>linex;
    for(size_t i=0;i<linex.length();i++){
      acu+=mapper(linex[i]);
    }
    cout<<acu<<" leds"<<endl;
  }
  return 0;
}
