#include<stdio.h>
int main(){
  unsigned long long a, b, max;
  scanf("%llu %llu", &a, &b);
  if(a>b) {
    max = a;
    a = b;
    b = max;
  }
  if(a != b)
    printf("%.llu\n", b - a -1);
  // else if(a == b)
    // printf("0\n");
  else printf("0");
  for(long long i=a+1; i<b; i++){
    printf("%.llu ", i);
  }
}
