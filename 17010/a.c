#include<stdio.h>
#include<string.h>
int main(){
  int N, cnt = 0, a, b, c;
  scanf("%d", &N);
  c = getchar();
  for(int i=0; i<N; i++){
    char arr[10001] = {};
    for(int j=0; j<100001; j++){
      arr[j] = getchar();
      if(arr[j] == '\n') break;
    }
    a = arr[0] - 48;
    if(arr[1] != ' '){
      b = arr[1] - 48;
      a = a * 10 + b;
    }
    for(int i=0; i<a; i++) printf("%c", arr[strlen(arr)-2]);
    printf("\n");
  }
}
