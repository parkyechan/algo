#include<stdio.h>
#include<string.h>
int main(){
  int N, num, cnt = 0, len, cnt2 = 0;
  char arr[1001] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %s", &num, arr);
    len = strlen(arr);
    while(1){
      if(cnt2 == len * num) break;
      for(int j=0; j<num; j++){
        printf("%c", arr[cnt]);
        cnt2++;
      }
      cnt++;
    }
    printf("\n");
    cnt = 0;
    cnt2 = 0;
  }
}
