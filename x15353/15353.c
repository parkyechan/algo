#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char arr1[10001] = {};
  char arr2[10001] = {};
  char arr3[10001] = {};
  int a1, a2;
  scanf("%s %s", arr1, arr2);
  a1 = strlen(arr1);
  a2 = strlen(arr2);
  if(a1 > a2){
    while(1){
      if(arr2 == 0) break;
      arr3[a1] = atoi(arr1[a1]) + atoi(arr2[a2]);
      a1--;
      a2--;
    }
  }
  for(int i=0; i<strlen(arr1); i++) printf("%s\n", arr3);
}
