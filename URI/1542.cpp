#include <bits/stdc++.h>
using namespace std;
//hfjimenez... Reading books 1542 solved :)
int main(){
  int old, days, now;
  while(cin>>old && old > 0){
      cin>>days>>now;
      int f = ((now*old)*(-days))/(old-now);
      if(f == 1)
        printf("%d pagina\n", f);
      else
        printf("%d paginas\n", f);
    }
}
