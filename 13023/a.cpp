#include<cstdio>
#include<vector>
#include<malloc.h>
using namespace std;
int chk[2001] = {};
int cnt = 0;
int n, m;
int arr[2001][2001] = {};
void DFS(int L){
  for(int i=0; i<n; i++){
    if(arr[L][i] == 1 && chk[i] == 0){
      chk[i] = 1;
      DFS(i);
    }
  }
}
int main(){
  scanf("%d %d", &n, &m);
  for(int i=0; i<m; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    arr[a][b] = 1;
    arr[b][a] = 1;
  }
  int flag = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(arr[i][j] == 1 && chk[j] == 0){
        chk[i] = 1;
        DFS(j);
        // flag = 1;
        break;
      }
    }
    if(flag == 1) break;
  }
  for(int i=0; i<n; i++){
    if(chk[i] == 1){
      cnt++;
    }
  }
  if(cnt == n) printf("1");
  else printf("0");
}
