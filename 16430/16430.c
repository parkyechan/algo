#include<stdio.h>
#include<math.h>
int main(){
  int a, b, res, cnt = 0, cnt2= 2;
  scanf("%d %d", &a, &b);
  while(1){
    if(a == b) break;
    a++;
    cnt++;
  }
  while(1){
    if(cnt2 > b) break;
    if(cnt % cnt2 == 0 && b % cnt2 == 0){
      cnt = cnt / cnt2;
      b = b / cnt2;
    }
    cnt2++;
  }
  printf("%d %d\n", cnt, b);
}
