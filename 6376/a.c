#include<stdio.h>
double fac(double a){
  if(a == 1)
    return 1;
  else if(a == 0)
    return 1;
  else
    a = a * fac(a-1);
  return a;
}

int main(){
  double sum = 1;
  printf("n e\n");
  printf("- -----------\n");
  printf("0 1\n");
  printf("1 2\n");
  printf("2 2.5\n");
  for(double i=0; i<10; i++){
    for(double j=0; j<=i; j++){
      sum += 1 / fac(j);
    }
    if(i == 0) sum -= 1;
    if(i>2) printf("%.lf %.9lf\n", i, sum);
    sum = 0;
  }
}
