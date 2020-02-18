#include<string.h>
main(){
  char arr1[1001] = {}, arr2[1001] = {};
  int flag1, flag2, flag = 0;
  scanf("%s %s", arr1, arr2);
  for(int i=0; i<strlen(arr1); i++){
    for(int j=0; j<strlen(arr2); j++){
      if(arr2[j] == arr1[i] && flag == 0){
        flag1 = j;
        flag2 = i;
        flag = 1;
      }
    }
  }
  for(int i=0; i<flag1; i++){
    for(int i=0; i<flag2; i++){
      printf(".");
    }
    printf("%c", arr2[i]);
    for(int i=flag2+1; i<strlen(arr1); i++){
      printf(".");
    }
    printf("\n");
  }
  printf("%s\n", arr1);
  for(int i=flag1+1; i<strlen(arr2); i++){
    for(int i=0; i<flag2; i++){
      printf(".");
    }
    printf("%c", arr2[i]);
    for(int i=flag2+1; i<strlen(arr1); i++){
      printf(".");
    }
    printf("\n");
  }
}
