#include<stdio.h>
int main(){
  int arr[1001]={};
  for(int i=0; i<3; i++){
    scanf("%d", &arr[i]);
  }
  if(arr[0]+arr[1]+arr[2] > 180 ||arr[0]+arr[1]+arr[2] < 180 ) printf("Error");
  else if(arr[0] == arr[1] && arr[1] == arr[2]) printf("Equilateral\n");
  else if(arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) printf("Isosceles\n");
  else printf("Scalene");
}
