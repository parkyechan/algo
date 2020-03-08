#include<cstdio>
#include<malloc.h>
#include<vector>
#include<queue>
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
  int m, n;
  scanf("%d %d", &m, &n);
  vector<int> v[n];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      int tmp;
      scanf("%d", &tmp);
      v[i].push_back(tmp);
    }
  }
  queue<Loc> q;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(v[i][j] == 1){
        q.push(Loc(i, j));
      }
    }
  }
  int day = 0;
  while(!q.empty()){
    int cnt = q.size();
    for(int i=0; i<cnt; i++){
      Loc tmp = q.front();
      q.pop();
      for(int i=0; i<4; i++){
        int xx = tmp.x + dx[i];
        int yy = tmp.y + dy[i];
        if(xx >= 0 && yy >= 0 && xx < n && yy < m){
          if(v[xx][yy] == 0){
            v[xx][yy] = 1;
            q.push(Loc(xx, yy));
          }
        }
      }
    }
    day++;
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(v[i][j] == 0){
        printf("-1");
        return 0;
      }
    }
  }
  printf("%d", day-1);
}
