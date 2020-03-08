#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
struct Loc{
  int x;
  int y;
  Loc(int a, int b){
    x = a;
    y = b;
  }
};
int main(){
  int cnt = 0;
  int res[1001] = {};
  int N;
  int arr[30][30] = {};
  queue<Loc> q;
  scanf("%d", &N);
  char foo[30][30] = {};
  for(int i=1; i<=N; i++){
    scanf("%s", foo[i]);
  }
  for(int i=1; i<=N; i++){
    for(int j=1; j<=N; j++){
      arr[i][j] = foo[i][j-1] - 48;
    }
  }
  for(int i=1; i<=N; i++){
    for(int j=1; j<=N; j++){
      if(arr[i][j] == 1){
        q.push(Loc(i, j));
        arr[i][j] = 0;
        res[cnt]++;
        while(!q.empty()){
          Loc tmp = q.front();
          q.pop();
          for(int k=0; k<4; k++){
            int xx = tmp.x + dx[k];
            int yy = tmp.y + dy[k];
            if(xx >= 1 && yy >= 1 && xx <= N && yy <= N){
              if(arr[xx][yy] == 1){
                arr[xx][yy] = 0;
                q.push(Loc(xx, yy));
                res[cnt]++;
              }
            }
          }
        }
        cnt++;
      }
    }
  }
  printf("%d\n", cnt);
  sort(res, res+cnt);
  for(int i=0; i<cnt; i++) printf("%d\n", res[i]);
}
