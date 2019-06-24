#include<stdio.h>
int main(){
  int N, M, arr[100001] = {}, res = 0, a, b;
  scanf("%d", &N);
  for(int i=0; i<N; i++)
    scanf("%d", &arr[i]);
  scanf("%d", &M);
  for(int i=0; i<M; i++){
    scanf("%d %d", &a, &b);
    for(int j=a-1; j<=b-1; j++)
      res += arr[j];
    printf("%d\n", res);
    res = 0;
  }
}
