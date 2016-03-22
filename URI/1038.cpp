#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

int main(){
	int X;//code/cuantity.
	float Y;
	cin>>X>>Y;
	cout.setf( ios::fixed, ios::floatfield );
	cout.precision(2);
	switch(X){
	case 1:

		cout<<"Total: R$ "<<Y*4.00<<endl;
		break;
	case 2:
		cout<<"Total: R$ "<<4.50*Y<<endl;
		break;
	case 3:
		cout<<"Total: R$ "<<5.00*Y<<endl;
		break;
	case 4:
		cout<<"Total: R$ "<<2.00*Y<<endl;
		break;
	case 5:
		cout<<"Total: R$ "<<1.50*Y<<endl;
		break;

	}
	return 0;
	}
