#include<stdio.h>
int main(){
  int arr[10] ={}, res;
  scanf("%d", arr);
  if(arr[1] == 0 && arr[3] != 0 && arr[2] != 1 && arr[0] == 1){
    res = arr[0] * 10 + arr[2];
  } else if(arr[1] == 0 && arr[3] == 0 && arr[2] == 1 && arr[0] == 1){
    res = arr[0] * 10 + arr[1] * 10;
  }
  else res = arr[0] + arr[1];
  printf("%d", arr[0]);
}
