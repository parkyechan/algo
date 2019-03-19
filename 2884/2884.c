#include<stdio.h>
int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  if(b < 45){
    a--;
    if(a < 0) a = 23;
    b = b + 15;
    printf("%d %d", a ,b);
  }else{
    printf("%d %d", a, b-45);
  }
}
