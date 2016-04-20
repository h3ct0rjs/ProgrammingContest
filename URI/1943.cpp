#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
//Top N
//categories:1, 3, 5, 10, 25, 50 and 100
int main(){
fast;short k;
cin>>k;
if(k==1)
  cout<<"Top 1"<<endl;
else if(k>1 &&k<=3)
  cout<<"Top 3"<<endl;
else if(k>3 &&k<=5)
  cout<<"Top 5"<<endl;
else if(k>5 &&k<=10)
  cout<<"Top 10"<<endl;
else if(k>10 &&k<=25)
    cout<<"Top 25"<<endl;
else if(k>25 &&k<=50)
    cout<<"Top 50"<<endl;
else
    cout<<"Top 100"<<endl;
}
