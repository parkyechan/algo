#include<stdio.h>
int main(){
  int N, flag;
  char arr[100][100] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
      scanf("%s", arr[i]);
  }
  scanf("%d", &flag);
  if(flag == 1){
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        printf("%c", arr[i][j]);
      }
      printf("\n");
    }
  }else if(flag == 2){
    for(int i=0; i<N; i++){
      for(int j=N-1; j>=0; j--){
        printf("%c", arr[i][j]);
      }
      printf("\n");
    }
  }else if(flag == 3){
    for(int i=N-1; i>=0; i--){
      for(int j=0; j<N; j++){
        printf("%c", arr[i][j]);
      }
      printf("\n");
    }
  }
}
