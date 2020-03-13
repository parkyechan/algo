main(){
  int N, q, M, T, R;
  scanf("%d %d %d %d %d", &N, &q, &M, &T, &R);
  int cnt = 0;
  int m = q;
  while(N != 0){
    if(m+T <= M){
      m += T;
      N--;
    }
    else{
      m -= R;
      if(m <= q){
        m = q;
      }
    }
    if(m+T > M && m == q){
      printf("-1");
      return 0;
    }
    cnt++;
  }
  printf("%d", cnt);
}
