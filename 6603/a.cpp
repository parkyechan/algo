#include<cstdio>
using namespace std;
int arr[50] = {};
int N;
int chk[50] = {};
int res[50] = {};
void DFS(int L){
  if(L == 6){
    for(int i=0; i<6; i++) printf("%d ", res[i]);
    printf("\n");
  }else{
    for(int i=0; i<N; i++){
      if(chk[i] == 0){
        chk[i] = 1;
        if(L > 0){
          if(res[L-1] < res[L]){
            DFS(L+1);
            res[L] = arr[i];
            chk[i] = 0;
          }else{
            DFS(L+1);
            chk[i] = 0;
          }
        }
      }
    }
  }
}

int main(){
  while(1){
    for(int i=0; i<50; i++) arr[i] = 0;
    for(int i=0; i<50; i++) chk[i] = 0;
    scanf("%d", &N);
    if(N == 0) break;
    for(int i=0; i<N; i++){
      scanf("%d", &arr[i]);
    }
    DFS(0);
  }
}
