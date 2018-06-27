#include <bits/stdc++.h>

int main(void){
  double x1,y1,x2,y2;
  scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
  printf("%.4f\n",sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
  return 0;
}
