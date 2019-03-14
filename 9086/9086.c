#include<stdio.h>
#include<string.h>
int main(){
  char arr[1001] = {};
  int N, k = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%s", arr);
    k = strlen(arr);
    printf("%c%c\n", arr[0], arr[k-1]);
    k = 0;
  }
}
