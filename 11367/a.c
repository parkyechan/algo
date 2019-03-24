#include<stdio.h>
#include<string.h>
int main(){
  int N, len;
  scanf("%d", &N);
  fflush(stdin);
  for(int i=0; i<N; i++){
    char arr[1001] = {};
    for(int j=0; j<50; j++){
      arr[j] = getchar();
      if(arr[j] == '\n') break;
    }
    for(int j=0; j<strlen(arr)-4; j++) printf("%c", arr[j]);
    printf(" ");
    if(arr[strlen(arr)-3] == '9' && arr[strlen(arr)-2] > 54)printf("A+\n");
    else if(arr[strlen(arr)-3] == '9' && arr[strlen(arr)-2] > 47)printf("A\n");
    else if(arr[strlen(arr)-3] == '8' && arr[strlen(arr)-2] > 54)printf("B+\n");
    else if(arr[strlen(arr)-3] == '8' && arr[strlen(arr)-2] > 47)printf("B\n");
    else if(arr[strlen(arr)-3] == '7' && arr[strlen(arr)-2] > 54)printf("C+\n");
    else if(arr[strlen(arr)-3] == '7' && arr[strlen(arr)-2] > 47)printf("C\n");
    else if(arr[strlen(arr)-3] == '6' && arr[strlen(arr)-2] > 54)printf("D+\n");
    else if(arr[strlen(arr)-3] == '6' && arr[strlen(arr)-2] > 47)printf("D\n");
    else printf("F\n");
  }
}
