#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
//hfjimenez@utp.edu.co
//Math Problems, Uri online Judge.Hello Galaxy.
using namespace std;

int main(){
	int n,year,t,messageyear,previo=5000;	//we need whatever value be maximun than 2113.
	string nameplanet,actualplanet;
	while(cin>>n && n!=0){
		for(int i=1;i<=n;i++){
			cin>>nameplanet>>year>>t;
			messageyear=abs(year-t);
			if(messageyear<previo){
				previo=messageyear;
				actualplanet=nameplanet;
			}
		}
		cout<<actualplanet<<endl;
		previo=5000;
	}
	return 0;
}
