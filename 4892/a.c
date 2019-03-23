#include<stdio.h>
int main(){
  int N, cnt = 0, res;
  while(1){
    cnt++;
    scanf("%d", &N);
    if(N == 0) break;
    res = (N - 1 )/2;
    if(N%2==1)
      printf("%d. odd %d\n", cnt, res);
    else
      printf("%d. even %d\n", cnt, res + 1);
  }
}
