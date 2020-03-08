#include<cstdio>
#include<queue>
using namespace std;
struct Loc{
  int x;
  int y;
  Loc(int a, int b){
    x = a;
    y = b;
  }
};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int res = 0;
int main(){
  int N;
  scanf("%d", &N);
  int arr[101][101] = {};
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  int max = 0;
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(arr[i][j] > max) max = arr[i][j];
    }
  }
  for(int t=1; t<max; t++){
    int szone = 0;
    int chk[101][101] = {};
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        if(arr[i][j] > t) chk[i][j] = 1;
      }
    }

    // for(int i=0; i<N; i++){
    //   for(int j=0; j<N; j++){
    //     printf("%d ", chk[i][j]);
    //   }
    //   printf("\n");
    // }
    // printf("---\n");
    queue<Loc> q;
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        if(chk[i][j] == 1){
          q.push(Loc(i, j));
          chk[i][j] = 0;
          while(!q.empty()){
            Loc tmp = q.front();
            q.pop();
            for(int a=0; a<4; a++){
              int xx = tmp.x + dx[a];
              int yy = tmp.y + dy[a];
              if(chk[xx][yy] == 1){
                chk[xx][yy] = 0;
                q.push(Loc(xx, yy));
              }
            }
          }
          szone++;
        }
      }
    }
    // printf("szone : %d\n", szone);
    if(szone > res) res = szone;
  }
  if(res == 0) res = 1;
  printf("%d", res);
}
