#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main() {
	fast;
	int cases,adds=0,x,y;
	cin>>cases;
	for(int i=1;i<=cases;i++){
		cin>>x>>y;
		if(x%2==0)
			x+=1;
		cout<<"Dato es:"<<x<<endl;
		for(int j=1;j<=y;j++){
			adds+=x;
			cout<<"Suma es:"<<adds<<" en caso:"<<j<<endl;
			x+=2;
		}
		cout<<adds<<endl;
	adds=0;
	}
 return 0;
}
