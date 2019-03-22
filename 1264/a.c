#include<stdio.h>
#include<string.h>
int main(){
  int len, cnt = 0;
  char arr[300] = {};
  while(1){
    scanf("%s", arr);
    if(arr[0] == 35) break;
    len = strlen(arr);
    for(int i=0; i<len; i++){
      if(arr[i] == '65' || arr[i] == '69' || arr[i] == '73' || arr[i] == '79' || arr[i] == '85')
        cnt++;
      if(arr[i] == '65' || arr[i] == '69' || arr[i] == '73' || arr[i] == '79' || arr[i] == '85')
    }
    printf("%d", cnt);
  }
}
