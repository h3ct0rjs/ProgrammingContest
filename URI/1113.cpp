#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
  int x,y;
  while(cin>>x>>y && x!=y){
    cout <<( (y>x) ? "Crescente" : "Decrescente") << endl;
  }
return 0;
}
