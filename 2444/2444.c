#include<stdio.h>
int main(){
  int N, cnt = 0;
  scanf("%d", &N);
  for(int i = N; i>0; i--){
    cnt++;
    for(int j = i-1; j > 0; j--)
      printf(" ");
    for(int j = 0; j< 2 * cnt - 1; j++)
      printf("*");
    printf("\n");
  }
  cnt = 0;
  for(int i = N-1; i>0; i--){
    cnt++;
    for(int j = 0; j < cnt; j++)
      printf(" ");
    for(int j = 2 * i - 1; j > 0; j--)
      printf("*");
    printf("\n");
  }
}
