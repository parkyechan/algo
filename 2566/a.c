#include<stdio.h>
int main(){
  int arr[10][10] = {}, max = 0, isave, jsave;
  for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
      scanf("%d", &arr[j][i]);
    }
  }
  for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
      if(arr[j][i] > max){
        max = arr[j][i];
        isave = i;
        jsave = j;
      }
    }
  }
  printf("%d\n", max);
  printf("%d %d", isave+1, jsave+1);
}
