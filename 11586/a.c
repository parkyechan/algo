#include<stdio.h>
int main(){
  int N, state;
  char arr[100][100] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
      scanf("%s", arr);
  }

  scanf("%d", &state);
  if(state == 1){
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        printf("%c", arr[i][j]);
        printf("\n");
      }
    }
  }
}
