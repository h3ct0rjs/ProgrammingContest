#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;
/*
Read 4 integer values A, B, C and D.
Then if B is greater than C and D is greater than A
and if the sum of C and D is greater than the sum of A and B
and if C and D were positives values and if A is even,
write the message “Valores aceitos” (Accepted values).
Otherwise, write the message “Valores nao aceitos” (Values not accepted).
*/
int main(){
	int A,B,C,D;//5 6 7 8
	cin>>A>>B>>C>>D;//Read 4 integer values A, B, C and D.
	if( (A%2==0) and ((B>C) and (D>A)) and  ((C+D) >(A+B)) and ((C>0) and (D>0)) )
			cout<<"Valores aceitos"<<endl;
	else{
		cout<<"Valores nao aceitos"<<endl;
	}
	return 0;
	}
