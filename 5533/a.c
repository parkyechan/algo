#include<stdio.h>
int main(){
  int N, arr[300][3] = {}, tmp, res[300]={}, arr2[300][3] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
  }
  for(int i=0; i<N; i++){
    arr2[i][0] = arr[i][0];
    arr2[i][1] = arr[i][1];
    arr2[i][2] = arr[i][2];
  }
  for(int i=0; i<N; i++){
    for(int j=i+1; j<N; j++){
      if(arr2[j][0] == arr2[i][0]){
        arr[i][0] = 0;
        arr[j][0] = 0;
      }
      if(arr2[j][1] == arr2[i][1]){
        arr[i][1] = 0;
        arr[j][1] = 0;
      }
      if(arr2[j][2] == arr2[i][2]){
        arr[i][2] = 0;
        arr[j][2] = 0;
      }
    }
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<3; j++){
      res[i] += arr[i][j];
    }
  }
  for(int i=0; i<N; i++){
    printf("%d\n", res[i]);
  }
}
