#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int mcd(int a, int b ){
    while(b!=0){
        a%=b;
        swap(a,b);
    }
    return a;
}

int mcm(int a,int b){
    return ((a*b)/mcd(a,b));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    cout<<mcd(a,b)<<endl;
    return 0;
}