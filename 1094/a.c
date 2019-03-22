#include<stdio.h>
int half(int a){
  a = a / 2;
  return a;
}
int main(){
  int N, sum = 64, state = 64, cnt = 1;
  scanf("%d", &N);
  while(1){
    if(sum == N) break;
    if(sum < N){
      state = half(state);
      sum += state;
      cnt++;
    }
    else if(sum > N){
      state = half(state);
      sum -= state;
    }
    if(cnt > 10) break;
  }
  printf("%d", cnt);
}
