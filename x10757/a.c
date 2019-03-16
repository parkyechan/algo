#include<stdio.h>
#include<string.h>

int main(){
  int arr[100001] = {};
  int arr2[100001] = {};
  int arr3[100001] = {};
  int i = 0, len, len2 len3;
  scanf("%d %d", arr, arr2);
  len = strlen(arr);
  len2 = strlen(arr2);
  if(len > len2){
    while(1){
      arr3[i] = arr[len] + arr2[len2];
      len--;
      len2--;
      i++;
      if(len2 == 0){
        while(1){
          arr3[i] = arr[len];
          i++;
          len--;
          if(len == 0) break;
        }
        break;
      }
    }
  }
  if(len < len2){
    while(1){
      arr3[i] = arr[len] + arr2[len2];
      len--;
      len2--;
      i++;
      if(len == 0){
        while(1){
          arr3[i] = arr[len2];
          i++;
          len--;
          if(len2 == 0) break;
        }
        break;
      }
    }
  }
  len3 = strlen(arr3);
  for(int i = len3; i>0 ; i--){
    printf("%d", arr3[i]);
  }
}
