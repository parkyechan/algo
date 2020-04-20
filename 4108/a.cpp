#include<cstdio>
int dx[9] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[9] = {0, 1, 1, 1, 0, -1, -1, -1};
int main(){
  int a, b;
  while(1){
    scanf("%d %d", &a, &b);
    if(a == 0 && b == 0) break;
    char arr[101][101] = {};
    for(int i=0; i<a; i++){
      scanf("%s", arr[i]);
    }
    for(int i=0; i<a; i++){
      for(int j=0; j<b; j++){
        int cnt = 0;
        for(int k=0; k<9; k++){
          int xx = j + dx[k];
          int yy = i + dy[k];
          if(xx >= 0 && yy >= 0 && xx < b && yy < a){
            if(arr[yy][xx] == '*') cnt++;
          }
        }
        if(arr[i][j] != '*') arr[i][j] = cnt + 48;
      }
    }
    for(int i=0; i<a; i++){
      printf("%s\n", arr[i]);
    }
  }
}
