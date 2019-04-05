#include<stdio.h>
int main(){
  int a, b, arr[1001] = {}, tmp, sum = 0;
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<a; i++){
    for(int j=0; j<a-1; j++){
      if(arr[j] > arr[j+1]){
        tmp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = tmp;
      }
    }
  }
  for(int i=a-1; i>=0; i--){
    for(int j=i-1; j>=0; j--){
      for(int k=j-1; k>=0; k--){
        if((arr[i] + arr[j] + arr[k]) > sum && (arr[i] + arr[j] + arr[k]) <= b){
          sum = arr[i] + arr[j] + arr[k];
        }
      }
    }
  }
  printf("%d\n",sum );
}
