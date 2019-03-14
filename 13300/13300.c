#include<stdio.h>
int main(){
  int N, M, a, b, sum = 0;
  int arr[3][7] = {};
  scanf("%d %d", &N, &M);
  for(int i=0; i<N; i++){
    scanf("%d %d", &a, &b);
    if(a == 0) arr[0][b]++;
    else arr[1][b]++;
  }
  for(int i=0; i<2; i++){
    for(int j=1; j<=6; j++){
        arr[0][j]++;
      while(arr[i][j] > M){
        arr[i][j] = arr[i][j] /M + arr[i][j]%M;
        sum++;
      }
      if(arr[i][j] != 0) sum++;
    }
  }
  printf("%d\n", sum);
}
