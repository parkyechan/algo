#include<stdio.h>
int main(){
  int a, b, c, d, e, f, yon, man, se;
  scanf("%d %d %d", &a, &b, &c);
  scanf("%d %d %d", &d, &e, &f);
  if(a == d){
    man = d - a;
  }else if(d > a){
    if(b == e){
      if(f >= c){
        man = d - a;
      }else{
        man = d - a - 1;
      }
    }else if(b > e){
      man = d - a - 1;
    }else if(e > b){
      man = d - a;
    }
  }
  se = d - a + 1;
  yon = d - a;
  printf("%d\n%d\n%d", man, se, yon);
}
