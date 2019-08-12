main(){
  int aa;
  scanf("%d", &aa);
  for(int i=0; i<aa; i++){
    int N, a, b, c, d;
    scanf("%d", &N);
    a = N / 25;
    N = N - a * 25;
    b = N / 10;
    N = N - b * 10;
    c = N / 5;
    N = N - c * 5;
    printf("%d %d %d %d\n", a, b, c, N);
  }
}
