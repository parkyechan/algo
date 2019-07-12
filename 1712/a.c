#include<stdio.h>
int main(){
  int cnt = 0;
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  while(a + b * cnt >= c * cnt){
    cnt++;
  }
  printf("%d", cnt);
}
