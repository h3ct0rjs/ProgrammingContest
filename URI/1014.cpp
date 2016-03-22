#include <bits/stdc++.h>

int main(void){
  int xdistance;
  float yspentfuel;
  scanf("%d %f",&xdistance,&yspentfuel);
  float average=xdistance/yspentfuel;
  printf("%.3f km/l\n",average);
  return 0;
}

