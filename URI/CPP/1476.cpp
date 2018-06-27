#include <bits/stdc++.h>
using namespace std;

int main() {

int shoecase,caso=1,numbershoe,femenino=0,masculino=0;
string line;		//see http://www.cplusplus.com/reference/string/string/getline/ and related to previous probem.
char genre;//genre and input line
while(getline(cin,line)){
if(caso>1)
	cout<<'\n';

istringstream input(line);
int shoecase;
input >> shoecase;
getline(cin, line);
input.str(line);
input.clear();

while(input>>numbershoe>>genre){

		if(numbershoe==shoecase){
			if(genre=='F')
				femenino+=1;
			else
				masculino+=1;
		}
	}
cout<<"Caso "<<caso<<":"<<endl
		<<"Pares Iguais: "<<femenino+masculino<<endl
		<<"F: "<<femenino<<endl
		<<"M: "<<masculino<<endl;
caso+=1;
femenino=0;masculino=0;	//reset of counters
}
return 0;	
}
