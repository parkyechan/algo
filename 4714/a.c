#include<stdio.h>
int main(){
  float a;
  while(1){
    scanf("%f", &a);
    if(a<0) break;
    printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", a, a * 0.167);
  }
}
