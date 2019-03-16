#include<stdio.h>
int main(){
  int arr[10] = {}, sum = 0, min = 0;
  for(int i=0; i<7; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<7; i++){
    if(arr[i] % 2 == 1){
      sum += arr[i];
      if(min == 0) min = arr[i];
      if(min > arr[i]) min = arr[i];
    }
  }
  if(sum != 0)
    printf("%d\n%d\n", sum, min);
  else printf("-1");
}
