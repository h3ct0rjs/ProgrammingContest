#include <iostream>
using namespace std;

inline bool isvowel(char x){
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') {return true};
	else{return false;}
	
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int maxi,counter;
	string wordval;
	cin>>wordval;
	int len=wordval.size();
	for(int i=0;i<len;++i){
		if(isvowel(wordval[i]){
			
		}		
		
	}
    cout << "Hello World!" << endl;
    return 0;
}

