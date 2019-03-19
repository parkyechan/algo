#include<stdio.h>
int main(){
  int a, b, v, cnt = 0, end = 0, tmp;
  scanf("%d %d %d", &a, &b, &v);
  if((a-b) == 1){
    v -= a;
    printf("%d", v + 1);
    return 0;
  }
  if(v%(a-b) == 0)
    printf("%d", (v / (a-b)));
  else
    printf("%d", (v / (a-b)) +1);
}
