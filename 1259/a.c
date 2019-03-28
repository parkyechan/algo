#include<stdio.h>
#include<string.h>
int main(){
  char arr[10001];
  while(1){
    int cnt = 0;
    scanf("%s", arr);
    if(arr[0] == '0') return 0;
    for(int i=0; i<strlen(arr)/2; i++){
      if(arr[i] == arr[strlen(arr)-i-1]) cnt++;
    }
    // printf("%d\n", strlen(arr));
    if(cnt == strlen(arr)/2) printf("yes\n");
    else printf("no\n");
  }
}
