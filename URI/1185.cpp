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

double numi=0,redux=10.0;       //we need to set a counter to know how many elements are in the above diagonal.
for(int i=0; i<11.0; ++i){			// Loop to make operations with elemnts below main diagonal
    for(int j=0; j<=redux; ++j){
        sum+=M[i][j];
        numi++;
      }
      redux--;
    }

if(quehacer=="S"){
  cout<<setprecision(1);
  cout<<fixed;
  cout<<sum<<endl;
  }

else{

    cout<<setprecision(1);
    cout<<fixed;
    cout<<double (sum/numi)<<endl;
}

return 0;
}
