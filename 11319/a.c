#include<stdio.h>
#include<string.h>
int main(){
  int N, cnt = 0, cnt2 = 0;
  char arr[1005] = {}, t;
  scanf("%d", &N);
  t = getchar();
  for(int i=0; i<N; i++){
    for(int j=0; j<1001; j++){
      arr[j] = getchar();
      if(arr[j] == '\n') break;
    }
    for(int j=0; j<strlen(arr); j++){
      if(arr[j] == 'a' || arr[j] == 'e' || arr[j] == 'i' || arr[j] == 'o' || arr[j] == 'u') cnt++;
      else if(arr[j] == 'A' || arr[j] == 'E' || arr[j] == 'I' || arr[j] == 'O' || arr[j] == 'U') cnt++;
      else if(arr[j] != ' '&&arr[j] !='\n') cnt2++;
    }
    printf("%d %d\n", cnt2, cnt);
    cnt = 0;
    cnt2 = 0;
  }
}
