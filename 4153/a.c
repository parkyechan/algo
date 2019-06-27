#include<stdio.h>
int main(){
  int a = 1, b = 0, c = 0, flag = 0;
  while(1){

    scanf("%d %d %d", &a, &b, &c);
    if(a == 0 && b == 0 && c == 0) break;
    if(a * a == b * b + c * c) flag = 1;
    else if(b * b == a * a + c * c) flag = 1;
    else if(c * c == b * b + a * a) flag = 1;
    if(flag == 1) printf("right\n");
    else printf("wrong\n");
    flag = 0;
  }
}
