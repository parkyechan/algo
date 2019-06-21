#include<stdio.h>
int main(){
  int N, M, K, hour = 0, min = 0;
  scanf("%d %d", &N, &M);
  scanf("%d", &K);
  if(K > 60){
    hour = N + K / 60;
    min = M + K % 60;
  } else {
    hour = N;
    min = M + K;
  }
  if(min >= 60){
    min = (min) % 60;
    hour += 1;
  }
  if(hour >= 24) hour = hour - 24;
  printf("%d %d", hour, min);
}
