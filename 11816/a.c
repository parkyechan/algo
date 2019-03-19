#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  int res;
  int sixteen = 1, sixsum = 0;
  char *arr = (char *)malloc(sizeof(char));
  scanf("%s", arr);
  if(arr[1] == 'x'){
    for(int i=strlen(arr); i>1; i--){
      if(arr[i] == '0' ||arr[i] == '1' ||arr[i] == '2' ||arr[i] == '3' ||arr[i] == '4' ||arr[i] == '5' ||arr[i] == '6' ||arr[i] == '7' ||arr[i] == '8' ||arr[i] == '9'){
        // printf("%d\n", (arr[i]-48) * sixteen);
        sixsum += (arr[i]-48) * sixteen;
        sixteen *= 16;
      }
      else if(arr[i] == 'a' ||arr[i] == 'b' ||arr[i] == 'c' ||arr[i] == 'd' ||arr[i] == 'e' ||arr[i] == 'f'){
        sixsum += (arr[i]-87) * sixteen;
        sixteen *= 16;
      }
    }
  }
  else if(arr[0] == '0' && arr[1] != 'x'){
    for(int i=1; i<strlen(arr); i++)
      printf("%c", arr[i]);
  }
  else
    printf("%s", arr);
  printf("%d", sixsum);
}
