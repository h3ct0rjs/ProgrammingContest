#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main(){

int t;cin>>t;
while(t--){
	string partials;cin>>partials;
	int n=partials.length();
	for(int i=0;i<n;i=i+2){	
		cout<<partials[i];
	}
	cout<<" ";
	for(int i=1;i<n;i=i+2){				
		cout<<partials[i];
	}
	cout<<endl;
}
}

