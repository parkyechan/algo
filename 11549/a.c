#include<stdio.h>
int main(){
  int N, cnt = 0, a;
  scanf("%d", &N);
  for(int i=0; i<5; i++){
    scanf("%d", &a);
    if(a == N) cnt++;
  }  
  printf("%d", cnt);
}
