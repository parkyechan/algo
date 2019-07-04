#include<stdio.h>
int main(){
  int N, a, b, sum = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &a, &b);
    sum = (a * a) / (b * b);
    printf("%d\n", sum);
  }
}
