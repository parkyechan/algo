#include<stdio.h>
int main(){
  int N, a;
  scanf("%d", &N);
  if(N % 2 == 0){
    printf("I LOVE CBNU\n");
    return 0;
  }
  for(int i=0; i<N; i++){
    printf("*");
  }
  printf("\n");
  for(int i=0; i<N/2+1; i++){
    for(int j=0; j<N/2-i; j++){
      printf(" ");
    }
    printf("*");
    if(i>0){
      for(int j=0; j<2*i-1; j++) printf(" ");
      printf("*");
    }
    printf("\n");
  }
}
