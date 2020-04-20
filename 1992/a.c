int n, arr[100][101] = {};
void qq(int x, int y, int size){
  int cur = arr[y][x];
  int flag = 1;
  for(int i=y; (i<y + size) && flag; i++){
    for(int j=x; (j<x + size) && flag; j++){
      if(cur != arr[i][j]) flag = 0;
    }
  }
  if(flag) printf("%d", cur);
  else{
    printf("(");
    qq(x, y, size / 2);
    qq(x + size / 2, y, size / 2);
    qq(x, y + size / 2, size / 2);
    qq(x + size / 2, y + size / 2, size / 2);
    printf(")");
  }
}
main(){
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%1d", &arr[i][j]);
    }
  }
  qq(0, 0, n);
}
