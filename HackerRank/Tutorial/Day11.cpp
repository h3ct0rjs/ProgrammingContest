#include <bits/stdc++.h>
using namespace std;
//Day 11 
int main(){
    vector< vector<int> > val(6,vector<int>(6));
    for(int i = 0;i < 6;i++){
       for(int j = 0;j < 6;j++){
          cin >> val[i][j];
       }
    }
    int suma,maxsum=-100;       //Quick Hack !-) 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            suma = val[i][j] + val[i][j+1] + val[i][j+2]
                    + val[i+1][j+1] + val[i+2][j] + val[i+2][j+1]
                    + val[i+2][j+2];
            if(suma>maxsum) maxsum=suma;  
        }
    }
    cout<<maxsum<<endl;
}

