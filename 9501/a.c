#include<stdio.h>
int main(){
  float T, N, D, a, b, c, cnt = 0;
  scanf("%f", &T);
  for(int i=0; i<T; i++){
    scanf("%f %f", &N, &D);
    for(int j=0; j<N; j++){
      scanf("%f %f %f", &a, &b, &c);
      if(a*(b/c) >= D) cnt++;
    }
    printf("%.f\n", cnt);
    cnt = 0;
  }
}
