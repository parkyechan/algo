#include<stdio.h>
int rev(int s){
  int w = 0, e = 0;
  while(s != 0){
    w = s % 10;
    s = s / 10;
    e = 10 * e + w;
  }
  return e;
}
int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  a = rev(a);
  b = rev(b);
  printf("%d", rev(a+b));
}
