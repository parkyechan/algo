#include<stdio.h>
int main(){
  long long a, b;
  scanf("%llu %llu", &a, &b);
  if((a-b) < 0) printf("%llu", b-a);
  else printf("%llu", a-b);
}
