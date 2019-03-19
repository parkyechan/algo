#include<stdio.h>
int main(){
  int N;
  scanf("%d", &N);
  while(N>0){
    if(N%2 != 0 && N > 1){
      printf("0");
      return 0;
    }
    N = N/2;
  }
  
  printf("1");
}
