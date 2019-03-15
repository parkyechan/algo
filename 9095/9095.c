#include<stdio.h>
int main(){
  int N, a, tmp = 0, res = 1, cnt1= 0, cnt2 = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &a);
    while(1){
      while(1){
        tmp += 2;
        if(tmp>a) break;
        res++;
      }
      tmp = 0;
      a = a - 3;
      if(a <= 0) break;
      res++;
    }
    printf("result >> %d\n", res);
  }
}
