#include<stdio.h>
int main(){
  int N;
  scanf("%d", &N);
  int h, w, r;
  for(int i=0; i<N; i++){
    scanf("%d %d %d", &h, &w, &r);
    int tmp = r / h + 1;
    int kk = (tmp-1) * h;
    if(r-kk == 0){
      r += h;
      tmp -= 1;
    }
    printf("%d0%d\n", r- kk, tmp);
  }
}
