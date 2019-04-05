#include<stdio.h>
#include<string.h>
int main(){
  int cnt = 0, cnt2 = 0;
  while(1){
    char arr[1001] = {}, t;
    int j = 0;
    while(1){
      arr[j] = getchar();
      if(arr[j] == '\n') break;
      if(arr[j] =='#') return 0;
      j++;
    }
    cnt2 = j;
    j = 0;
    t = arr[0];
    while(cnt2 > 0){
      if(arr[j] < 97) {
        arr[j] += 32;
      }
      j++;
      cnt2--;
    }
    for(int i=2; i<=strlen(arr); i++){
      if(arr[i] == arr[0]){
        cnt++;
      }
    }
    printf("%c %d\n", t, cnt);
    cnt = 0;
  }
}
