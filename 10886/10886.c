#include<stdio.h>
int main(){
  int N, a, cnt = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &a);
    if(a == 1) cnt++;
  }
  if(((float)cnt / (float)N) > 0.5) printf("Junhee is cute!");
  else printf("Junhee is not cute!");
}
