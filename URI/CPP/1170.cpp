#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
//hfjimenez@utp.edu.co
//Math Problems, Uri online Judge.
using namespace std;

int main(){
    fast;
	int n,dias=0;cin>>n;
	while(n--){
		double x;
		cin>>x;
		cout<<fixed;cout<<setprecision(0);
		while(x>1){
			x/=2;
			dias++;
		}
		cout<<dias<<" dias"<<endl;
		dias=0;
	}
}
