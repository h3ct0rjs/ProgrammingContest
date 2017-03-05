#include <bits/stdc++.h>
#include <iomanip>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//feedback: hfjimenez@utp.edu.co
int main(){
string quehacer;
double sum=0,average=0;
cin>>quehacer;                            //for a square matriz of 12*12 we need to gather the 144 elements.
double M[12][12];

for(int i=0;i<12.0;i++){      //fill the rows
  for(int j=0;j<12.0;j++){    //fill the cols
    cin>>M[i][j];             //fill the entire matriz
  }
}
/*
for(int i=0;i<3.0;i++){      //print  the rows
  for(int j=0;j<3.0;j++){    //print the cols
    cout<<M[i][j]<<" ";     //print the matriz
  }
  cout<<endl;
}
*/

if(quehacer=="S"){
for(int i=0; i<12.0; ++i){			// Loop to make operations with elemnts below main diagonal
		for(int j=0; j<12.0; ++j){
			if(i>j){
			 sum+=M[i][j];
      }
    }
  }
cout<<setprecision(1);
cout<<fixed;
cout<<sum<<endl;
}

else{
  for(int i=0; i<12.0; ++i){			// Loop to make operations with elemnts below main diagonal
  		for(int j=0; j<12.0; ++j){
  			if(i>j){
  				sum+=M[i][j];
        }
      }
    }
    cout<<setprecision(1);
    cout<<fixed;
    cout<<double (sum/66.0)<<endl;
}
return 0;
}
