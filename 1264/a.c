#include<stdio.h>
#include<string.h>
int main(){
  while(1){
    int cnt = 0;
    char arr[300] = {};
    for(int i=0; i<300; i++){
      arr[i] = getchar();
      if(arr[i] == '\n' )break;
    }
    if(arr[0] == '#') return 0;
    for(int i=0; i<strlen(arr)-1; i++){
      if(arr[i] == 97 || arr[i] == 101 || arr[i] == 105 || arr[i] == 111 || arr[i] == 117 ) cnt++;
      else if(arr[i] == 65 || arr[i] == 69 || arr[i] == 73 || arr[i] == 79 || arr[i] == 85 ) cnt++;
    }
    printf("%d\n", cnt);
  }
}
