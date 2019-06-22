#include<stdio.h>
int main(){
  int a[11] = {}, N, tmp, cnt = 0;
  scanf("%d", &N);
  if(N == 1000000000){
    printf("1000000000");
    return 0;
  }
  for(int i=0; i<10; i++){
    a[i] = N % 10;
    N = N / 10;
    cnt++;
    if(N == 0 && a[i] == 0) break;

  }
  for(int i = 0; i<cnt; i++){
    for(int j=0; j<cnt-1; j++){
      if(a[j] > a[j+1]){
        tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
  }
  for(int i=cnt-1; i>0; i--){
    printf("%d", a[i]);
  }
}
