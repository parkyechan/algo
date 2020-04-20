main(){
  int t;
  scanf("%d", &t);
  int m, n, x, y;
  for(int i=0; i<t; i++){
    int tmpx = 0, tmpy = 0, cnt = 0;
    scanf("%d %d %d %d", &m, &n, &x, &y);
    while(tmpx != x || tmpy != y){
      if(cnt > n * m){
        cnt = -1;
        break;
      }
      tmpx++; tmpy++;
      if(tmpx > m) tmpx = 1;
      if(tmpy > n) tmpy = 1;
      // printf(">  >  %d %d\n", tmpx, tmpy);
      cnt++;
      if(tmpx == x && tmpy == y) break;
    }
    printf("%d\n", cnt);
  }
}
