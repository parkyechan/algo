#include<stdio.h>
int main(){
  long long a, b, sum=0, c, d;
  scanf("%llu %llu", &a, &b);
  c = (b - a + 1) / 2;
  while(c != 0){
    c--;
    d = (a + b);
    sum += d;
    d -= 2;
  }
  printf("%llu", sum);
}
