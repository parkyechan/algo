#include<stdio.h>
#include<math.h>
int main(){
  int a, b, p, cnt = 0;
  scanf("%d %d", &a, &b);
  for(int i=a; i<=b; i++){
    if(i % 2 == 0 && i != 2) continue;
    for(int j=2; j<=sqrt(i); j++){
      if(i % j == 0)
        cnt++;
    }
    if(cnt == 0 && i != 1)
      printf("%d\n", i);
    cnt = 0;
  }
}
