#include<stdio.h>
int main(){
  unsigned long long a, b;
  scanf("%llu %llu", &a, &b);
  if(a != b)
    printf("%.llu\n", b - a -1);
  else printf("0");
  for(long long i=a+1; i<b; i++){
    printf("%.llu ", i);
  }
}
