#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
  int cnt = 0;
  char arr[1000001] = {};
  scanf("%s", arr);
  fflush(stdin);
  for(int i=0; i<1000001; i++){
    cnt++;
    if(arr[i] == 0) break;
  }
  for(int i=0; i<cnt; i++)
    printf("%c", toupper(arr[i]));
}
