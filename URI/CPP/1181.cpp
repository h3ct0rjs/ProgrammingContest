#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
string quehacer;

double sum=0,average=0, M[12][12];int L;
cin>>L>>quehacer;

for(int i=0;i<12.0;i++){      //fill the rows
  for(int j=0;j<12.0;j++)    //fill the cols
    cin>>M[i][j];             //fill the entire matriz
}

for(int j=0;j<12.0;j++){
    sum+=M[L][j];       //just calculate the sum.
  }
if(quehacer=="S")
	cout<<fixed<<setprecision(1)<<sum<<endl;
else
	cout<<fixed<<setprecision(1)<<sum/12<<endl;
}
