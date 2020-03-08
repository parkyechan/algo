#include<cstdio>
#include<queue>
using namespace std;

int dx[9] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[9] = {1, 2, 2, 1, -1, -2, -2, -1};
struct Loc{
  int x;
  int y;
  Loc(int a, int b){
    x = a;
    y = b;
  }
};
int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    int cnt = 1;
    int m;
    queue<Loc> q;
    scanf("%d", &m);
    int arr[m][m] = {};
    int x, y;
    scanf("%d %d", &x, &y);
    q.push(Loc(x, y));
    int disx, disy;
    scanf("%d %d", &disx, &disy);
    Loc res = q.front();
    while(res.x != disx && res.y != disy){
      cnt++;
      Loc tmp = q.front();
      q.pop();
      for(int i=0; i<9; i++){
        int xx = tmp.x + dx[i];
        int yy = tmp.y + dy[i];
        if(xx >= 0 && yy >= 0 && xx < m && yy < m){
          q.push(Loc(xx, yy));
        }
      }
      res = q.front();
    }
    printf("%d\n", cnt);
  }
  printf("end");;
}
