#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	int N,hour,minute,second;
	cin>>N;
	hour=N/3600;
	minute=(N -(hour*3600))/60;
	second=(N-(minute*60)-(hour*3600))%60;
	cout<<hour<<":"<<minute<<":"<<second<<endl;
	return 0;
}

