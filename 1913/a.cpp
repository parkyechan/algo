#include<cstdio>
#include<malloc.h>
int main(){
  int n, f;
  scanf("%d", &n);
  scanf("%d", &f);
  int c = 1;
  int **arr = (int **)malloc(sizeof(int *) * 1001);
  for(int i=0; i<1001; i++) arr[i] = (int *)malloc(sizeof(int) * 1001);
  int s = n * n;
  int st = n;
  int x = 0, y = -1;
  int stc = 1;
  while(s != 1){
    // if(c == 1){
      y++;
      for(int i=0; i<st; i++){
        arr[y+i][x] = s;
        s--;
      }
      y = y + st -1;
      stc++;
      if(stc == 2){
        st--;
        stc = 0;
      }
    //   c++;
    // }else if(c == 2){
      x++;
      for(int i=0; i<st; i++){
        arr[y][x+i] = s;
        s--;
      }
      x = x + st - 1;
      stc++;
      if(stc == 2){
        st--;
        stc = 0;
      }
    //   c++;
    // }else if(c == 3){
      y--;
      for(int i=0; i<st; i++){
        arr[y-i][x] = s;
        s--;
      }
      y = y - st + 1;
      stc++;
      if(stc == 2){
        st--;
        stc = 0;
      }
    //   c++;
    // }else if(c == 4){
      x--;
      for(int i=0; i<st; i++){
        arr[y][x-i] = s;
        s--;
      }
      x = x - st + 1;
      stc++;
      if(stc == 2){
        st--;
        stc = 0;
      }
      c = 1;
    // }
    if(st < 0) break;
  }
  arr[n/2][n/2] = 1;
  int fx, fy;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(arr[i][j] == f){
        fx = j;
        fy = i;
      }
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  printf("%d %d", fy + 1, fx + 1);
  for(int i=0; i<1001; i++) free(arr[i]);
  free(arr);
}
