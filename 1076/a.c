#include<string.h>
main(){
  char arr[1001] = {}, arr1[1001] = {}, arr2[1001] = {};
  scanf("%s", arr);
  scanf("%s", arr1);
  scanf("%s", arr2);
  if(strcmp(arr, "black") == 0 && strcmp(arr1, "black") == 0){
    printf("0");
    return 0;
  }
  // if(strcmp(arr, "black") == 0) printf("");
  if(strcmp(arr, "brown") == 0) printf("1");
  if(strcmp(arr, "red") == 0) printf("2");
  if(strcmp(arr, "orange") == 0) printf("3");
  if(strcmp(arr, "yellow") == 0) printf("4");
  if(strcmp(arr, "green") == 0) printf("5");
  if(strcmp(arr, "blue") == 0) printf("6");
  if(strcmp(arr, "violet") == 0) printf("7");
  if(strcmp(arr, "grey") == 0) printf("8");
  if(strcmp(arr, "white") == 0) printf("9");

  if(strcmp(arr1, "black") == 0) printf("0");
  if(strcmp(arr1, "brown") == 0) printf("1");
  if(strcmp(arr1, "red") == 0) printf("2");
  if(strcmp(arr1, "orange") == 0) printf("3");
  if(strcmp(arr1, "yellow") == 0) printf("4");
  if(strcmp(arr1, "green") == 0) printf("5");
  if(strcmp(arr1, "blue") == 0) printf("6");
  if(strcmp(arr1, "violet") == 0) printf("7");
  if(strcmp(arr1, "grey") == 0) printf("8");
  if(strcmp(arr1, "white") == 0) printf("9");

  // if(strcmp(arr2, "black") == 0) printf("");
  if(strcmp(arr2, "brown") == 0) printf("0");
  if(strcmp(arr2, "red") == 0) printf("00");
  if(strcmp(arr2, "orange") == 0) printf("000");
  if(strcmp(arr2, "yellow") == 0) printf("0000");
  if(strcmp(arr2, "green") == 0) printf("00000");
  if(strcmp(arr2, "blue") == 0) printf("000000");
  if(strcmp(arr2, "violet") == 0) printf("0000000");
  if(strcmp(arr2, "grey") == 0) printf("00000000");
  if(strcmp(arr2, "white") == 0) printf("000000000");
}
