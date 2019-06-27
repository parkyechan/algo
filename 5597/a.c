#include<stdio.h>
int main(){
  int arr[1001] = {}, tmp, sch[31] = {};
  for(int i=0; i<28; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<28; i++){
    for(int j=0; j<27; j++){
      if(arr[j] > arr[j+1]){
        tmp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = tmp;
      }
    }
  }
  for(int i=0; i<28; i++){
    sch[arr[i]] = 1;
  }
  for(int i=1; i<31; i++){
    if(sch[i] != 1) printf("%d\n", i);
  }
}
