#include <iostream>
using namespace std;
//computer parts Company, 1743
//inline and outer connectors.

int main() {
	bool oc[5];
	bool mc[5];
	int count=0,ncount=0;
	

//fill the array with each connector.
for(int i=0;i<5;i++)  //	O(5)
	cin>>oc[i];
for(int i=0;i<5;i++)
	cin>>mc[i];
	
//we need to compare
for(int j=0;j<5;j++)
	if(oc[j]!=mc[j])
		count+=1;
	else 
		ncount+=1;

if(count==5)
	cout<<"Y"<<endl;
else 
	cout<<"N"<<endl;
}
