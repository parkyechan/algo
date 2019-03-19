#include<stdio.h>
unsigned long long five(unsigned long long a){
  unsigned long long brid = 2 + a, mid = a, res = 0;
  if(a == 0) res = 1;
  return res + 2 * brid + mid;
}
int main(){
  unsigned long long N, sum = 0;
  scanf("%llu", &N);
  for(unsigned long long i=0; i<N; i++){
    sum += five(i);
  }
  printf("%llu", sum%45678);
}
