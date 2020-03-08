#include<cstdio>
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
int arr[301][301] = {};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  queue<Loc> q;
  int day = 0;
  int tmptmp = 0;
  while(1){
    day++;
    int cnt = 0;
    for(int i=0; i<a; i++){
      for(int j=0; j<b; j++){
        if(arr[i][j] == 0){
          for(int k=0; k<4; k++){
            int xx = j + dx[k];
            int yy = i + dy[k];
            if(xx >= 0 && yy >= 0 && xx < b && yy < a){
              if(arr[yy][xx] > 0){
                arr[yy][xx]--;
                if(arr[yy][xx] == 0){
                  arr[yy][xx] = -1;
                }
              }
            }
          }
        }
      }
    }
    for(int i=0; i<a; i++){
      for(int j=0; j<b; j++){
        if(arr[i][j] == -1) arr[i][j] = 0;
      }
    }
    int chk[301][301] = {};
    for(int i=0; i<a; i++){
      for(int j=0; j<b; j++){
        if(arr[i][j] > 0 && chk[i][j] == 0){
          q.push(Loc(i, j));
          chk[i][j] = 1;
          while(!q.empty()){
            Loc tmp = q.front();
            q.pop();
            for(int k=0; k<4; k++){
              int xx = tmp.x + dx[k];
              int yy = tmp.y + dy[k];
              if(xx >= 0 && yy >= 0 && xx < b && yy < a){
                if(arr[yy][xx] > 0 && chk[yy][xx] == 0){
                  chk[yy][xx] = 1;
                  q.push(Loc(yy, xx));
                }
              }
            }
          }
          cnt++;
        }
      }
    }
    if(cnt>=2){
      break;
    }
  }
  printf("%d", day);
}
