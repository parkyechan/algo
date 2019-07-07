#include<stdio.h>
int cnt1 = 0, cnt2 = 0;

int fib(int a){
  if(a == 1) {
    cnt1++;
    return 1;
  } else if(a == 0) {
    cnt2++;
    return 1;
  }
  return fib(a-1) + fib(a-2);
}
int main(){
  int N, a, s;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &a);
    s = fib(a);
    printf("%d %d\n", cnt2, cnt1);
    cnt1 = 0;
    cnt2 = 0;
  }
}
