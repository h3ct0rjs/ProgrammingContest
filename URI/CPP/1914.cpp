#include <bits/stdc++.h>
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
//1914 Whose turns is it 

int main(){
int qt,n,m;					//integer covers -2,147,483,648 to 2,147,483,647 unsigned duplicate this.
unsigned int result;		// 10^9+10^9=
fast;
cin >>qt;
string name1,choice1,name2,choice2;
while(qt--){
	cin>>name1>>choice1>>name2>>choice2>>n>>m;
	result=n+m;				//the best way to save memory is just taking the nmod10to get the last digit and test if it is even or odd....
	if(result%2==0){	//el resultado es par
		if(choice1=="PAR")
			cout<<name1<<endl;
		else 
			cout<<name2<<endl;
	}
	else{
		if(choice1=="IMPAR")
			cout<<name1<<endl;
		else
			cout<<name2<<endl;
		}
	}
	
 }
