#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
//hfjimenez...
//Uri online Fucking Queen, this cost me too much, but the easy way to understand
//was thinking outside of the box...math..just math
void solve(int x1,int y1,int x2,int y2){
      bool equalrow = (x1 == x2 || y1 == y2);
      bool equaldiag = (abs(x1 - x2) == abs(y1 - y2));
      if(x1 == x2 && y1 == y2) cout <<0<< endl;         //The minimun move is 0,
                                                        //that means that you're not going anywhere.
      else if(equalrow || equaldiag) cout <<1<< endl;   //the other move is one when you're in the same diag.
      else cout <<2<<endl;                              //else you need to create and L movement.
   }

int main(){
  int x1,y1,x2,y2;
  fast;
  while((cin>>x1>>y1>>x2>>y2) && (x1!=0 && y1!=0 && x2!=0&& y2!=0) ){
    solve(x1,y1,x2,y2);
  }
}
