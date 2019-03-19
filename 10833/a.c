#include<stdio.h>
int main(){
  int N;
  int a, b, d = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &a, &b);
    d += b%a;
  }
  printf("%d", d);

}
