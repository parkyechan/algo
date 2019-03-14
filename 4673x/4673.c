#include<stdio.h>
int selfnum(int a){
  if(a/10 < 1){
    a = a + a;
    printf("%d\n", a);
  }
  return a;
}
int main(){
  int N = 1;
  while(N<100){
    N = selfnum(N);
  }
}
