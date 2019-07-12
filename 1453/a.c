#include<stdio.h>
int main(){
  int N, arr[1001] = {}, pc[1001] = {}, cnt = 0;
  scanf("%d", &N);
  for(int i=1; i<=N; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=1; i<=100; i++){
    pc[arr[i]]++;
  }
  for(int i=1; i<=100; i++){
    if(pc[i] > 1) cnt += pc[i] -1;
  }
  printf("%d", cnt);
}
