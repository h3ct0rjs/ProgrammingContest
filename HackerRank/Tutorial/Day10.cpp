#include <iostream>
#include <utility>
#include <stack>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL); //fast io.
#define endl "\n";                                      //Avoid fflush
//Assembling a Simple Stack.
//hfjimenez@utp.edu.co , Learning to use stacks.
//Harakiri xD


int main(){
fast;
int n,count=0,countmax=0;
cin>> n;
stack <bool> binario;			//create a basic stack datastructure.

while(n>0){								//take the decimal value and divide,
													//send the remainder to the stack.
bool r=n%2;			
	n/=2;
//	cout<<r<<" ";
	binario.push(r);				//Fill Stack.
	}
//cout <<endl;
//cout << "Stack Filled."<<endl;

while(! binario.empty() ){		
			if(binario.top()==1){
				count+=1;	
				//cout<< binario.top()<<" ";
				if(count>countmax){
					countmax=count;
				}
				binario.pop();
		}

	else{
		
			count=0;
			//cout<<binario.top()<<" ";
			binario.pop();
		}
 }
	cout<<countmax<<endl;
}

