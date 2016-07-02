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

while(n>0){						//take the decimal value and divide,
								//send the remainder to the stack.
bool r=n%2;			
	n/=2;
	binario.push(r);			//Fill Stack.
	}

while(! binario.empty() ){		//iterating through the stack until it becomes empty.
	
	if(binario.top()==1){
		count+=1;
		binario.pop();
		}

	else{
		if(count>countmax){
			countmax=count;
			}
		count=0;
	binario.pop();
		}
 }
	cout<<countmax<<endl;
}

