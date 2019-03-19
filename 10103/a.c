#include<stdio.h>
int main(){
  int N, a = 100, b = 100, res1, res2;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &res1, &res2);
    if(res1 > res2) b -= res1;
    else if (res1 < res2) a-= res2;
  }
  printf("%d\n%d", a, b);
}
