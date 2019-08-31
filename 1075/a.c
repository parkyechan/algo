#include<stdio.h>

int main(){
  int a, b, cnt = 0;
  scanf("%d", &a);
  scanf("%d", &b);
    for(int i=0; i<2; i++){
      a /= 10;
    }
    for(int i=0; i<2; i++){
      a *= 10;
    }
    while(a%b !=0){
      a++;
      cnt++;
    }
    if(cnt >= 10) printf("%d", cnt);
    else printf("0%d", cnt);
}
