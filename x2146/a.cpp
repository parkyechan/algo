#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
struct Loc{
  int x;
  int y;
  Loc(int a, int b){
    x = b;
    y = a;
  }
};
int arr[101][101] = {};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
vector<Loc> area1[10001];
int main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  queue<Loc> q;
  int cnt = 0;
  int res[101][101] = {};
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(arr[i][j] == 1 && res[i][j] == 0){
        cnt++;
        q.push(Loc(i, j));
        res[i][j] = cnt;
        while(!q.empty()){
          Loc tmp = q.front();
          q.pop();
          for(int k=0; k<4; k++){
            int xx = tmp.x + dx[k];
            int yy = tmp.y + dy[k];
            if(xx >= 0 && yy >= 0 && xx < N && yy < N){
              if(res[yy][xx] == 0 && arr[yy][xx] > 0){
                q.push(Loc(yy, xx));
                res[yy][xx] = cnt;
                area1[cnt].push_back(Loc(yy, xx));
                printf("%d %d\n", yy, xx);
              }
            }
          }
        }
      }
    }
  }
  int result = 2147000000;
  int cvd = 1;
  printf("--\n");
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }
  printf("--\n");
  // printf("%d", area1[1].first);
  for(int i=1; i<cnt; i++){
    for(int l=i+1; l<=cnt; l++){
      for(int j=0; j<area1[i].size(); j++){
        for(int k=0; k<area1[l].size(); k++){
          int rr = abs(abs(area1[i][j].x - area1[l][k].x) - abs(area1[i][j].y - area1[l][k].y)) - 1;
          // printf("%d %d %d %d\n", area1[i][j].x, area1[i][j].y, area1[l][k].x, area1[l][k].y);
          if(rr < result) result = rr;
        }
      }
    }
  }
  printf("%d", result);
}
