#include<stdio.h>
int main(){
  int a, b, v, cnt = 0, end = 0;
  scanf("%d %d %d", &a, &b, &v);
  while(1){
    cnt++;
    end += a;
    if(v <= end) break;
    end -= b;
  }
  printf("%d", cnt);
}
