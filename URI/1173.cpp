#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main(){
fast;
int n;
cin>>n;
int array[10];     //create array of n positions.
array[0]=n;       //the first position of the array is n.
for(int i=1;i<10;i++){
  array[i]=2*array[i-1];
}

for(int i=0;i<10;i++){   //WTF What is wrong ??? what that h3ck ! It will give a segmentation fault,
  //if we overpass the buffer size !!! It seems that the operative system is to insecure!!!
//"N[i] = X"
cout<<"N["<<i<<"] = "<<array[i]<<endl;

}

return 0;
}
