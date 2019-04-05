#include<stdio.h>
#include<string.h>
int main(){
  int i, sum = 0, mul = 1;
  char arr[1001] = {}, cnt, cnt2 = 0;
  while(1){
    cnt = 0;
    scanf("%s", arr);
    while(strlen(arr) > cnt){
      if(arr[cnt] == '#') break;

      if(arr[cnt] == '-') arr[cnt] = '0';
      else if(arr[cnt] == '\\') arr[cnt] = '1';
      else if(arr[cnt] == '(') arr[cnt] = '2';
      else if(arr[cnt] == '@') arr[cnt] = '3';
      else if(arr[cnt] == '?') arr[cnt] = '4';
      else if(arr[cnt] == '>') arr[cnt] = '5';
      else if(arr[cnt] == '&') arr[cnt] = '6';
      else if(arr[cnt] == '%') arr[cnt] = '7';
      else if(arr[cnt] == '/') arr[cnt] = '8';
      cnt++;
    }
    if(arr[cnt] == '#') break;
    for(int i=strlen(arr); i>0; i--){
      if(arr[i] != '8'){
        sum += mul * (arr[i]-48);
        mul *= 10;
      }else{
        sum *= -1;
      }
    }
    for(int i=0; i<strlen(arr); i++){
      printf("%d\n", sum);
    }
  }
}
