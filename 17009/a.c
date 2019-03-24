#include<stdio.h>
int main(){
  int a, sum = 0, sum2 = 0, x = 3, y = 3;
  for(int i=0; i<6; i++){
    scanf("%d", &a);
    if(i<3){
      sum += a * x;
      x--;
    }
    else {
      sum2 += a * y;
      y--;
    }
  }
  if(sum > sum2) printf("A");
  else if(sum2 > sum)  printf("B");
  else printf("T");

}
