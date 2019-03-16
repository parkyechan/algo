#include<stdio.h>
int main(){
  int N, arr[10]={}, cnt = 0;
  scanf("%d", &N);
  for(int i=0; i<5; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<5; i++){
    // for(int j=1; j<10; j++){
      if(arr[i] == N) cnt++;
    // }
  }
  printf("%d", cnt);
}
