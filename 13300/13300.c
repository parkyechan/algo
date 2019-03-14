#include<stdio.h>
int main(){
  int N, M, arr[3][7] = {0}, a, b, sum = 0;
  scanf("%d %d", &N, &M);
  for(int i=1; i<=N; i++){
    scanf("%d %d", &a, &b);
    for(int j=1; j<=6; j++){
      if(a == 0 && b == j) {
        arr[0][j]++;
        printf("debug1\n");
      }
      else if(a == 1 && b == j){
        arr[1][j]++;
        printf("debug2\n");
      }
    }
  }
  for(int i = 1; i<=6; i++){
    for(int j = 1; j<=2; j++){
      if(arr[j][i]%M == 0 && arr[j][i] != 0) sum += arr[j][i]/M;
      else if(arr[j][i] != 0) sum += arr[j][i]/M + 1;
    }
  }
  printf("%d\n", sum);
}
