#include<stdio.h>
int main(){
  int E, S, M, res = 0, a = 0, b = 0, c = 0;
  scanf("%d %d %d", &E, &S, &M);
  while(1){
    if(E == a && S == b && M == c) break;
    res++;
    a++;
    b++;
    c++;
    if(a > 15) a = 1;
    if(b > 28) b = 1;
    if(c > 19) c = 1;
  }
  printf("%d\n", res);
}
