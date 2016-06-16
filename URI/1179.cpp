#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n";
using namespace std;
int main(){
fast;
int par[5],impar[5], temp,ci=0,cp=0,c=15;
while(c--){
	cin>> temp;
	if(temp%2==0){
		par[cp]=temp;
		cp++;
		}
	else{
		impar[ci]=temp;
		ci++;
		}
	if(cp==5){
		for(int j=0;j<5;++j)
				cout<<"par["<<j<<"] = "<<par[j]<<endl;
		}
	if(ci==5){
		for(int j=0;j<5;++j)
				cout<<"impar["<<j<<"] = "<<par[j]<<endl;
		}
	}

}
