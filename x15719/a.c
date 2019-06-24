#include<stdio.h>
int main(){
  int N, a, b = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &a);
    if(a == b){
      printf("%d", a);
      return 0;
    }
    b = a;
  }
}
