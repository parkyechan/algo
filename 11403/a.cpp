#include<cstdio>
#include<queue>
using namespace std;
int main(){
  int N;
  scanf("%d", &N);
  int arr[101][101] = {};
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(arr[i][j] == 1){
        int p = j;
        for(int k=0; k<N; k++){
          if(arr[p][k] == 1){
            arr[i][k] = 1;
          }
        }
      }
    }
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(arr[i][j] == 1){
        int p = j;
        for(int k=0; k<N; k++){
          if(arr[p][k] == 1){
            arr[i][k] = 1;
          }
        }
      }
    }
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

}
