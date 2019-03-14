#include<stdio.h>
int main(){
  double a, b, c, d, e, f;
  scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
  e = b;
  f = d;
  while(1){
    if(b<1) break;
    b = b / 10;
    a = a * 10;
  }
  while(1){
    if(d<1) break;
    d = d / 10;
    c = c * 10;
  }
  printf("%.lf",  a + c + e + f);
}
