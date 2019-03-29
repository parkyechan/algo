#include<stdio.h>
int main(){
  int a, sum = 1, j;
  scanf("%d", &a);
  for(int i = 1; i<=a; i++){
    if(a > sum) sum = i
    else{
      j = 1;
      sum = j;
      j++;
    }
  }
}
