#include<stdio.h>
int main(){
  int i = 0, cnt, k = 0, j = 0;
  char arr1[1001] = {}, arr2[1001] = {};
  scanf("%s", arr1);
  scanf("%s", arr2);
  while(1){
    if(arr1[j++] == '\0') break;
  }
  while(1){
    if(i == j) break;
    if(arr1[i] == '1'){
      while(1){
        k = i;
        if(arr1[k] == '\0') break;
        arr1[k] = arr1[k+1];
      }
    }else if(arr1[i] == '2'){
      while(1){
        k = i;
        if(arr1[k] == '\0') break;
        arr1[k] = arr1[k+1];
      }
    }else if(arr1[i] == '3'){
      while(1){
        k = i;
        if(arr1[k] == '\0') break;
        arr1[k] = arr1[k+1];
      }
    }else if(arr1[i] == '4'){
      while(1){
        k = i;
        if(arr1[k] == '\0') break;
        arr1[k] = arr1[k+1];
      }
    }else if(arr1[i] == '5'){
      while(1){
        k = i;
        if(arr1[k] == '\0') break;
        arr1[k] = arr1[k+1];
      }
    }else if(arr1[i] == '6'){
      while(1){
        k = i;
        if(arr1[k] == '\0') break;
        arr1[k] = arr1[k+1];
      }
    }else if(arr1[i] == '7'){
      while(1){
        k = i;
        if(arr1[k] == '\0') break;
        arr1[k] = arr1[k+1];
      }
    }else if(arr1[i] == '8'){
      while(1){
        k = i;
        if(arr1[k] == '\0') break;
        arr1[k] = arr1[k+1];
      }
    }else if(arr1[i] == '9'){
      while(1){
        k = i;
        if(arr1[k] == '\0') break;
        arr1[k] = arr1[k+1];
      }
    }
    i++;
  }
  printf("%s", arr1);
}
