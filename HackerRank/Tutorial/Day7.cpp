#include <bits/stdc++.h>
#define endl "\n";
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


int main(){
    int n;
    fast;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
       cin >> arr[i];
    }
    reverse(arr.begin(),arr.end());
    for(int j = 0;j < n;j++){
       cout<<arr[j]<<" ";
    }
}
