#include<cstdio>
#include<queue>
#include<algorithm>
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
int main(){
  int m, n, c;
  int sx, sy, ex, ey;
  int arr[101][101] = {};
  scanf("%d %d %d", &m, &n, &c);
  for(int i=0; i<c; i++){
    scanf("%d %d %d %d", &sx, &sy, &ex, &ey);
    for(int i=sx; i<ex; i++){
      for(int j=sy; j<ey; j++){
        arr[j][i] = 1;
      }
    }
  }
  queue<Loc> q;
  int chk[1001] = {};
  int cnt = 0;
  vector<int> v;
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(arr[i][j] == 0){
        q.push(Loc(j, i));
        arr[i][j] = 1;
        int area = 0;
        area++;
        while(!q.empty()){
          Loc tmp = q.front();
          q.pop();
          for(int i=0; i<4; i++){
            int xx = tmp.x + dx[i];
            int yy = tmp.y + dy[i];
            if(xx >= 0 && yy >= 0 && xx < n && yy < m){
              if(arr[yy][xx] == 0){
                q.push(Loc(xx, yy));
                arr[yy][xx] = 1;
                area++;
              }
            }
          }
        }
        v.push_back(area);
        cnt++;
      }
    }
  }
  printf("%d\n", cnt);
  sort(v.begin(), v.end());
  for(int i=0; i<v.size(); i++) printf("%d ", v[i]);
}
