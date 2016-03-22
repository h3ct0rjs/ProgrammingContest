//Beginner Problems
//hfjimenez@utp.edu.co
//Uri Judge Bhaskara's Formula.

#include <bits/stdc++.h>
#define fast ios_base::std ; cin.tie(NULL)

using namespace std;

int main() {
	float a,b,c,d,r1,r2;
	cin>>a>>b>>c;
	d=(pow(b,2)-(4*a*c));
	if(d>0 && a!=0){
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("R1 = %.5lf\n",r1);
		printf("R2 = %.5lf\n",r2);
	}
	else{
		cout<<"Impossivel calcular"<<endl;
	}


	return 0;
}
