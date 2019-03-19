#include<stdio.h>
int main(){
  int a, b, c, sum = 0;
  scanf("%d %d %d", &a, &b, &c);
  for(int i=1; i<=a; i++){
    sum += b * i + c * i * i;
  }
  printf("%d", sum);
}
