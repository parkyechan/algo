#include<stdlib.h>
main(){
  int N;
  double a;
  char e;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%lf", &a);
    e = getchar();
    printf("$%.2lf\n", 0.8 * (double)a);
  }
}
