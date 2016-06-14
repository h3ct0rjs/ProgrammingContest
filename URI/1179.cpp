#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main(){
fast;

int par[5],impar[5], allarray[15],pp=0,pi=0;
for(int i=0;i<15;i++)
	cin>>allarray[i];

cout<<"Recibidos: ";
for(int d=0;d<15;d++)
	cout<<" "<<allarray[d]<<" ";

for(int i=0;i<15;i++){
	if(allarray[i]%2==0){
		par[pp]=allarray[i];
		pp++;	
		}
	else{ 
		impar[pi]=allarray[i];
		pi++;
		}
	if(pp==4){
		for(int d=0;d<5;d++)
			cout<<"par["<<d<<"] = "<<par[d]<<endl;
			}
	pp=0;
	}

}
