#include<stdio.h>
int main(){
  int N, a, sum = 0, arr[1001] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<N; i++){
    for(int j=1; j<=arr[i]; j++){
      if(j%2 == 1) sum += j;
    }
    printf("%d\n", sum);
    sum = 0;
  }
}
