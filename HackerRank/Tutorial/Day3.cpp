#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    fast;
    int N;
    cin >> N;
    if(N%2!=0) { 
        cout<<"Weird"<<endl;
    }
    else{
        if(N>=2 && N<=5){
            cout<<"Not Weird"<<endl;
        }
        else if(N>=6 && N<=20){
            cout<<"Weird"<<endl;
        }
        else{
            cout<<"Not Weird"<<endl;
        }
            
        
    }   
    
    
    
}
