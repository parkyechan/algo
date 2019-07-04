#include<stdio.h>
int main(){
  int N, arr[1001][2] = {}, a = 0, b = 0, res, flag = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &arr[i][0], &arr[i][1]);
  }
  for(int i=0; i<N; i++){
    a = arr[i][0];
    while(1){
      res = a + b * 2;
      if(res == arr[i][0] && flag == 1) break;
      flag = 1;
      a--;
      a--;
      b++;
    }
    flag = 0;
    printf("%d %d\n", a, b);
  }
}
