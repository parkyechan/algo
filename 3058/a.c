#include<stdio.h>
int main(){
  int N, arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, min = 101, sum = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    for(int j=0; j<7; j++){
      scanf("%d", &arr[j]);
    }
    for(int j=0; j<7; j++){
      if(arr[j] % 2 == 0) sum += arr[j];
      if(min > arr[j] && arr[j]%2 == 0) min = arr[j];
    }
    printf("%d %d\n", sum, min);
    min = 101;
    sum = 0;
  }
}
