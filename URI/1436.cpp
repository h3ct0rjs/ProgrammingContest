#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//Brick Game, Median in a vector...
//feedback hfjimenez...
int main(){
  fast;
  int t,size,cases=1;cin>>t ;
  while(t--){
    cin>>size;
    int intArray[size];    //this will set all the positions to cero in the array.
    for (int i = 0; i <size; ++i)
        cin>>intArray[i];           //fill with the ages.
      sort(intArray, intArray+size);
    //for (int i = 0; i <size; ++i)
    //    cout<<intArray[i]<<" ";           //fill with the ages.
    int pos=(size/2);
    cout<<"Case "<<cases<<": "<<intArray[pos]<<endl;
    cases++;
      }

return 0;
}
