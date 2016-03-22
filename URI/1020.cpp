#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	int Age,ny,nm,nd;
	cin>>Age;
	ny=Age/365;
	nm=(Age-(ny*365))/30;
	nd=(Age-(ny*365)-(nm*30));
	cout<<ny<<" ano(s)"<<endl;
	cout<<nm<<" mes(es)"<<endl;
	cout<<nd<<" dia(s)"<<endl;
	return 0;
}

