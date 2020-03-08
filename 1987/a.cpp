#include<cstdio>
#include<vector>
using namespace std;
int max1 = 0;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int chk[30] = {};
int a, b;
char arr[30][30] = {};
void DFS(int x, int y, int sum){
  if(chk[arr[y][x]-65] == 1){
    // printf("x y : %d %d\n", x, y);
    if(sum > max1) max1 = sum;
  }else{
    chk[arr[y][x]-65] = 1;
    for(int i=0; i<4; i++){
      int xx = x + dx[i];
      int yy = y + dy[i];
      // printf("x y xx yy : %d %d %d %d\n", x, y, xx, yy);
      if(xx >= 0 && xx < b && yy >= 0 && yy < a){
        if(chk[arr[yy][xx]] == 0){
          // chk[arr[yy][xx]-65] = 1;
          DFS(xx, yy, sum + 1);
        }
      }
    }
    chk[arr[y][x]-65] = 0;
  }
}
int main(){
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    scanf("%s", arr[i]);
  }
  // chk[arr[0][0]-65] = 1;
  DFS(0, 0, 1);
  printf("%d", max1-1);
}
