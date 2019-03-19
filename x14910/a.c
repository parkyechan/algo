#include<stdio.h>
int main(){
  int a, b = - 1000001;
  for(int i=0; i<100000; i++){
    scanf("%d", &a);
    // if(a >= b)
    printf("%d", a);
  }
}
