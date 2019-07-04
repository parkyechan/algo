#include<stdio.h>
int main(){
  int i = 0, flag = 0;
  char *arr;
  arr = (char*)malloc(sizeof(char)*3000000);
  while(1){
    arr[i++] = getchar();
    if(arr[i-1] == '\n') break;
  }
  for(int k=0; k<i/2-1; k++){
    if(arr[2*k] > arr[2*k+2] && k<i/2-1) flag = 1;
  }
  if(flag == 1) printf("Bad");
  else printf("Good");
}
