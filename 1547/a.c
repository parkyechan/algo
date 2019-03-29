#include<stdio.h>
int main(){
  int N, a, b;
  int arr[5] = {0, 1, 0, 0, 0};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &a, &b);
    if(arr[a] == arr[b]) continue;
    if(arr[a] == 1){
      arr[b] = 1;
      arr[a] = 0;
    }else if(arr[b] == 1){
      arr[a] = 1;
      arr[b] = 0;
    }
  }
  for(int i=1; i<4; i++){
    if(arr[i] == 1){
      printf("%d", i);
    }
  }
}
