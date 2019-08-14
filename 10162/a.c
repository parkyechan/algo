main(){
  int N, a = 0, b = 0, c = 0;
  scanf("%d", &N);
  a = N / 300;
  N = N % 300;
  b = N / 60;
  N = N % 60;
  if(N % 10 != 0){
    printf("-1");
    return 0;
  }
  else N = N / 10;
  printf("%d %d %d", a, b, N);
}
