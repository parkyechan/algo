#include<stdio.h>
#include<string.h>
int main(){
  int N, len;
  char dd;
  scanf("%d", &N);
  dd = getchar();
  for(int i=0; i<N; i++){
    char arr[1001] = {};
    int cnt = 0;
    while(1){
      arr[cnt++] = getchar();
      if(arr[cnt-1] == '\n') break;
    }
    if(arr[strlen(arr)-2] == '0' && arr[strlen(arr)-3] == ' '){
      for(int j=0; j<strlen(arr)-3; j++) printf("%c", arr[j]);
      printf(" F\n");
    }else if(arr[strlen(arr)-3] == ' '){
      for(int j=0; j<strlen(arr)-3; j++) printf("%c", arr[j]);
      printf(" F\n");
    }else{
      for(int j=0; j<strlen(arr)-4; j++) printf("%c", arr[j]);
      if(arr[strlen(arr)-3] == '9' && arr[strlen(arr)-2] > 54)printf(" A+\n");
      else if(arr[strlen(arr)-3] == '9' && arr[strlen(arr)-2] > 47)printf(" A\n");
      else if(arr[strlen(arr)-3] == '8' && arr[strlen(arr)-2] > 54)printf(" B+\n");
      else if(arr[strlen(arr)-3] == '8' && arr[strlen(arr)-2] > 47)printf(" B\n");
      else if(arr[strlen(arr)-3] == '7' && arr[strlen(arr)-2] > 54)printf(" C+\n");
      else if(arr[strlen(arr)-3] == '7' && arr[strlen(arr)-2] > 47)printf(" C\n");
      else if(arr[strlen(arr)-3] == '6' && arr[strlen(arr)-2] > 54)printf(" D+\n");
      else if(arr[strlen(arr)-3] == '6' && arr[strlen(arr)-2] > 47)printf(" D\n");
      else if(arr[strlen(arr)-4] == '1' && arr[strlen(arr)-3] == '0' && arr[strlen(arr)-2] == '0') printf("A+\n");
      else printf(" F\n");
    }
  }
}
