#include<stdio.h>
int main(){
  int arr[5] = {}, flag = 0;
  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
      scanf("%d", &arr[j]);
      if(arr[j] == 1) flag++;
    }
    if(flag == 4) printf("E\n");
    if(flag == 3) printf("A\n");
    if(flag == 2) printf("B\n");
    if(flag == 1) printf("C\n");
    if(flag == 0) printf("D\n");
    flag = 0;
  }
}
