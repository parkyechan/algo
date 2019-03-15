#include<stdio.h>
#include<math.h>
int main(){
  int N, M, cnt = 1, max, min, breaker = 1, res, i = 1, res2;
  scanf("%d %d", &N, &M);
  if(M > N) {
    max = N;
    min = M;
  }
  else {
    max = M;
    min = N;
  }
  while(1){
    if(M % cnt == 0 && N % cnt == 0) res = cnt;
    cnt++;
    if(cnt > max) break;
  }
  printf("%d ", res);
  while(1){
    if((max * i) % min == 0) {
      res2 = max * i;
      break;
    }
    i++;
  }
  printf("%d", res2);
}
