#include<cstdio>
#include<malloc.h>
#include<queue>
using namespace std;
int main(){
  int m, n;
  scanf("%d %d", &m, &n);
  int **arr = (int **)malloc(sizeof(int *) * (m+1));
  for(int i=0; i<=m; i++) arr[i] = (int *)malloc(sizeof(int) * (m+1));
  int a, b;
  for(int i=0; i<n; i++){
    scanf("%d %d", &a, &b);
    arr[a-1][b-1] = 1;
    arr[b-1][a-1] = 1;
  }
  queue<int> q;
  int cnt = 0;
  int chk[m] = {};
  for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
      if(arr[i][j] == 1){
        q.push(j);
        chk[i] = 1;
        chk[j] = 1;
        arr[i][j] = 0;
        while(!q.empty()){
          int f = q.front();
          q.pop();
          for(int k=0; k<m; k++){
            if(arr[f][k] == 1){
              chk[f] = 1;
              chk[k] = 1;
              q.push(k);
              arr[f][k] = 0;
            }
          }
        }
        cnt++;
      }
    }
  }
  for(int i=0; i<m; i++){
    if(chk[i] == 0) cnt++;
  }
  printf("%d", cnt);
}
