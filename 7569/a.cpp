#include<cstdio>
#include<queue>
#include<malloc.h>
using namespace std;
struct Loc{
  int x;
  int y;
  Loc(int a, int b){
    x = b;
    y = a;
  }
};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main(){
  int m, n, h;
  queue<Loc> q;
  scanf("%d %d %d", &m, &n, &h);
  int **arr = (int **)malloc(sizeof(int *)*n*h);
  for(int i=0; i<n*h; i++) arr[i] = (int *)malloc(sizeof(int) * m);
  int **chk = (int **)malloc(sizeof(int *)*n*h);
  for(int i=0; i<n*h; i++) chk[i] = (int *)malloc(sizeof(int) * m);
  for(int i=0; i<n*h; i++){
    for(int j=0; j<m; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i=0; i<n*h; i++){
    for(int j=0; j<m; j++){
      if(arr[i][j] == 1){
        q.push(Loc(i, j));
        chk[i][j] = 1;
      }
    }
  }
  int day = 0;
  int qs = q.size();
  while(!q.empty()){
    if(qs == 0){
      qs = q.size();
      day++;
    }
    qs--;
    Loc tmp = q.front();
    q.pop();
    int xx, yy;
    // printf("here : %d %d\n", tmp.y, tmp.x);
    for(int i=0; i<4; i++){
      xx = tmp.x + dx[i];
      yy = tmp.y + dy[i];
      int floor = tmp.y / n;
      // printf("%d %d\n", yy, xx);
      if(xx >= 0 && yy >= floor * n && xx < m && yy < (floor +1) * n){
        if(arr[yy][xx] == 0){
          arr[yy][xx] = 1;
          q.push(Loc(yy, xx));
        }
      }
    }
    if(tmp.y + n < n * h){
      if(arr[tmp.y + n][tmp.x] == 0){
        // printf("jump!! : %d %d\n", tmp.y+n, tmp.x);
        arr[tmp.y + n][tmp.x] = 1;
        q.push(Loc(tmp.y + n, tmp.x));
      }
    }
    if(tmp.y - n >= 0){
      if(arr[tmp.y - n][tmp.x] == 0){
        arr[tmp.y - n][tmp.x] = 1;
        q.push(Loc(tmp.y - n, tmp.x));
      }
    }
  }
  for(int i=0; i<n*h; i++){
    for(int j=0; j<m; j++){
      if(arr[i][j] == 0){
        printf("-1");
        return 0;
      }
    }
  }
  printf("%d", day);
}
