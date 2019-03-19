#include<stdio.h>
int main(){
  unsigned long long N, cnt=0, sum = 0, dvd = 0, num = 1, mok;
  scanf("%llu", &N);
  for(unsigned long long i=1; i<N * N; i++){
    dvd = i % N;
    mok = i / N;
    if(dvd == mok){
      sum+=i;
      i = i + N;
    }
  }
  printf("%llu", sum);
}
