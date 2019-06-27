#include<stdio.h>
  int main(){
    char arr[100] ={}, a;
    int N, j = 0;
    scanf("%d", &N);
    a = getchar();
    for(int i=0; i<N; i++){
      while(1){
        arr[j] = getchar();
        if(arr[j] == '\n') break;
        j++;
      }
      arr[j] = '\0';
      if(arr[0] > 95) arr[0] = arr[0] -32;
      j = 0;
      printf("%s\n", arr);
    }
  }
