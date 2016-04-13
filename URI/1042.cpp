#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//Simple Sort. using sort() Example of cpp site.
//feedback hfjimenez...
int main(){
  fast;
  int temp[3],intArray[3] = {0};    //this will set all the positions to cero in the array.
                            //we don't know what's in the array.
  for (size_t i = 0; i <3; ++i)   //fill the array with the input data.
      cin>>intArray[i];
  copy(begin(intArray), end(intArray), begin(temp));//copy intArray to temp array.
  sort(begin(temp),end(temp));  //Now we call the sort function from c++ 11.sort in ascending order.
  for (size_t i = 0; i<3; ++i)
        cout<<temp[i]<<endl;
  cout<<endl;
  for (size_t i = 0; i<3; ++i)
        cout << intArray[i]<<endl;
    return 0;
}
