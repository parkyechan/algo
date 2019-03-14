#include<stdio.h>
int main(){
  int N, max = -1000000, min = 1000000, a;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &a);
    if(a > max) max = a;
    if(min > a) min = a;
  }
  printf("%d %d\n", min, max);
}
