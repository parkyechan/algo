#include<stdio.h>
int main(){
  int arr[10] = {}, min1 = 0, min2 = 0;
  for(int i=0; i<5; i++)
    scanf("%d", &arr[i]);
  for(int i=0; i<3; i++){
    if(min1 == 0) min1 = arr[0];
    if(min1 > arr[i]) min1 = arr[i];
  }
  for(int i=3; i<5; i++){
    if(min2 == 0) min2 = arr[3];
    if(min2 > arr[i]) min2 = arr[i];
  }
  printf("%d", min1 + min2 - 50);
}
