#include<stdio.h>
int main(){
  int a, b, arr1[101][101] = {}, arr2[101][101] = {}, arr3[101][101] = {};
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      scanf("%d", &arr1[i][j]);
    }
  }
  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      scanf("%d", &arr2[i][j]);
    }
  }
  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      printf("%d ", arr1[i][j] + arr2[i][j]);
    }
    printf("\n");
  }
}
