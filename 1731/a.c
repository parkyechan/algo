#include<stdio.h>
int main(){
  int N, arr[100] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &arr[i]);
  }
  if(arr[1] + (arr[1] - arr[0]) == arr[2]){
    printf("%d", arr[N-1] + arr[1] - arr[0]);
  }
  if(arr[1] * (arr[1] / arr[0]) == arr[2]){
    printf("%d", arr[N-1] *( arr[1] / arr[0]));
  }
}
