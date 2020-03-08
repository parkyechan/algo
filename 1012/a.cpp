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
int main(){
  int N;
  int dx[4] = {1, -1, 0, 0};
  int dy[4] = {0, 0, 1, -1};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int arr[51][51] = {};
    int chk[51][51] = {};
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);
    for(int j=0; j<k; j++){
      int a, b;
      scanf("%d %d", &a, &b);
      arr[b][a] = 1;
    }
    queue<Loc> q;
    int cnt = 0;
    for(int j=0; j<n; j++){
      for(int t=0; t<m; t++){
        if(arr[j][t] == 1){
          q.push(Loc(j, t));
          arr[j][t] = 0;
          while(!q.empty()){
            Loc f = q.front();
            q.pop();
            for(int tt=0; tt<4; tt++){
              int xx = f.y + dx[tt];
              int yy = f.x + dy[tt];
              if(xx >= 0 && yy >= 0 && xx < m && yy < n){
                if(arr[yy][xx] == 1){
                  arr[yy][xx] = 0;
                  q.push(Loc(yy, xx));
                }
              }
            }
          }
          cnt++;
        }
      }
    }
    printf("%d\n", cnt);
  }
}
