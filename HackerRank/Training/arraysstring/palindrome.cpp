#include <bits/stdc++.h>
#define endl "\n";
using namespace std;
//Monk Teaches Palindrome
//hfjimenez@utp.edu.co 
bool isPalindrome(string vword){
	int left=0;
	int right=vword.size()-1;
	while(left<right){
		if(vword[left++] != vword[right--]){return false;}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);	//Fast IO
	int T;cin>>T;
	while(T--){
	
		string word;
		cin>>word;
		if(isPalindrome(word)){cout<<((word.size()%2==0)?"YES EVEN":"YES ODD")<<endl;}
		else{cout<<"NO"<<endl;}
	}//End test cases ;
	return 0 ;
}
