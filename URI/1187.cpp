#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;

string quehacer;
double sum=0,average=0,p=10,q=1;
cin>>quehacer;                            //for a square matriz of 12*12 we need to gather the 144 elements.
double M[12][12];
for(int i=0;i<12.0;i++){      //fill the rows
  for(int j=0;j<12.0;j++){    //fill the cols
    cin>>M[i][j];             //fill the entire matriz
  }
}
cout<<endl<<endl;
for(int i=0;i<4.0;i++){
  for(int j=0;j<11;j++){
    cout<<M[i][j]<<" ";             //fill the entire matriz
           p--;
           q++;
  }
  cout<<endl;
}


return 0;
}
