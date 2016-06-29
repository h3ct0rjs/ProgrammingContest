#include <iostream>
#include <utility>
#include <iomanip>
#include <map>
#include <string>
//Assembling a Phone Book
//hfjimenez@utp.edu.co , Learning to use map and pair. 
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL); //fast io.
#define endl "\n";					//Avoid fflush 
typedef pair<string,string> data;
int main(){
	fast;
	map<string, string> phonebook;
	int n;
	cin>>n;
	string name,number,query;
	while(n--){
	cin>> name>>number;
	phonebook.insert(data(name,number)); //This will fill the Phonebook with the proper pair.
	}

	while(cin>>query){
	 map<string, string>::iterator p = phonebook.find(query);
	 if (p != phonebook.end()){  
			cout<< query << "=" << p->second << endl;}
	 else	{cout <<"Not found"<<endl; }
	}
}
