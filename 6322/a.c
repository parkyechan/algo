#include<stdio.h>
#include<math.h>
int main(){
  int i = 0;
  double a, b, c, res;
  while(1){
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a == 0 && b == 0 && c == 0) break;
    if(a == -1){
      i++;
      printf("Triangle #%d\n", i);
      if(c * c - b * b < 0){
        printf("Impossible.\n\n");
        continue;
      }
      res = sqrt(c * c - b * b);
      printf("a = %.3lf\n\n", res);
    }else if(b == -1){
      i++;
      printf("Triangle #%d\n", i);
      if(c * c - a * a < 0){
        printf("Impossible.\n\n");
        continue;
      }
      res = sqrt(c * c - a * a);
      printf("b = %.3lf\n\n", res);
    }else if(c == -1){
      i++;
      printf("Triangle #%d\n", i);
      res = sqrt(a * a + b * b);
      printf("c = %.3lf\n\n", res);
    }
  }
}
