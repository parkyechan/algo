#include<math.h>
main(){
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  double res = (a + 1) * (b + 1) / (c + 1) - 1;
  printf("%.lf", floor(res));
}
