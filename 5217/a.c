#include<stdio.h>
int main(){
  int N, M, cnt = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &M);
    printf("Pairs for %d:", M);
    for(int j=1; j<13; j++){
      for(int k=1; k<13; k++){
        if((j+k) == M && cnt == 0 && j != k && j < k){
          printf(" %d %d", j, k);
          cnt++;
        }else if((j+k) == M && cnt != 0 && j != k && j < k){
          printf(", %d %d", j, k);
        }
      }
    }
    printf("\n");
    cnt = 0;
  }
}
