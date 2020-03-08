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
int main(){
  int N;
  char arr[101][101] = {};
  int res1[101][101] = {};
  int res2[101][101] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%s", arr[i]);
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(arr[i][j] == 'R'){
        res1[i][j] = 1;
        res2[i][j] = 1;
      }else if(arr[i][j] == 'G'){
        res1[i][j] = 1;
        res2[i][j] = 2;
      }else if(arr[i][j] == 'B'){
        res1[i][j] = 3;
        res2[i][j] = 3;
      }
    }
  }

  int cnt1 = 0, cnt2 = 0;
  queue<Loc> q1;
  queue<Loc> q2;
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(res1[i][j] == 1){
        q1.push(Loc(j, i));
        res1[i][j] = 0;
        while(!q1.empty()){
          Loc tmp = q1.front();
          q1.pop();
          for(int k=0; k<4; k++){
            int xx = tmp.y + dx[k];
            int yy = tmp.x + dy[k];
            if(xx >= 0 && yy >=0 && xx < N && yy < N){
              if(res1[xx][yy] == 1){
                res1[xx][yy] = 0;
                q1.push(Loc(yy, xx));
              }
            }
          }
        }
        cnt1++;
      }
      else if(res1[i][j] == 2){
        q1.push(Loc(j, i));
        res1[i][j] = 0;
        while(!q1.empty()){
          Loc tmp = q1.front();
          q1.pop();
          for(int k=0; k<4; k++){
            int xx = tmp.y + dx[k];
            int yy = tmp.x + dy[k];
            if(xx >= 0 && yy >=0 && xx < N && yy < N){
              if(res1[xx][yy] == 2){
                res1[xx][yy] = 0;
                q1.push(Loc(yy, xx));
              }
            }
          }
        }
        cnt1++;
      }else if(res1[i][j] == 3){
        q1.push(Loc(j, i));
        res1[i][j] = 0;
        while(!q1.empty()){
          Loc tmp = q1.front();
          q1.pop();
          for(int k=0; k<4; k++){
            int xx = tmp.y + dx[k];
            int yy = tmp.x + dy[k];
            if(xx >= 0 &&yy >=0 && xx < N && yy < N){
              if(res1[xx][yy] == 3){
                res1[xx][yy] = 0;
                q1.push(Loc(yy, xx));
              }
            }
          }
        }
        cnt1++;
      }
    }
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(res2[i][j] == 1){
        q2.push(Loc(j, i));
        res2[i][j] = 0;
        while(!q2.empty()){
          Loc tmp = q2.front();
          q2.pop();
          for(int k=0; k<4; k++){
            int xx = tmp.y + dx[k];
            int yy = tmp.x + dy[k];
            if(xx >= 0 && yy >=0 && xx < N && yy < N){
              if(res2[xx][yy] == 1){
                res2[xx][yy] = 0;
                q2.push(Loc(yy, xx));
              }
            }
          }
        }
        cnt2++;
      }
      else if(res2[i][j] == 2){
        q2.push(Loc(j, i));
        res2[i][j] = 0;
        while(!q2.empty()){
          Loc tmp = q2.front();
          q2.pop();
          for(int k=0; k<4; k++){
            int xx = tmp.y + dx[k];
            int yy = tmp.x + dy[k];
            if(xx >= 0 && yy >=0 && xx < N && yy < N){
              if(res2[xx][yy] == 2){
                res2[xx][yy] = 0;
                q2.push(Loc(yy, xx));
              }
            }
          }
        }
        cnt2++;
      }else if(res2[i][j] == 3){
        q2.push(Loc(j, i));
        res2[i][j] = 0;
        while(!q2.empty()){
          Loc tmp = q2.front();
          q2.pop();
          for(int k=0; k<4; k++){
            int xx = tmp.y + dx[k];
            int yy = tmp.x + dy[k];
            if(xx >= 0 && yy >=0 && xx < N && yy < N){
              if(res2[xx][yy] == 3){
                res2[xx][yy] = 0;
                q2.push(Loc(yy, xx));
              }
            }
          }
        }
        cnt2++;
      }
    }
  }




  printf("%d %d\n", cnt2, cnt1);

}
