main(){
  int N, tmp;
  scanf("%d", &N);
  if(N%2 == 0){
    N = N / 2 + 1;
    N = N * N;
    printf("%d", N);
  }else if(N%2 == 1){
    tmp = N / 2 + 2;
    N = N / 2 + 1;
    N = N * tmp;
    printf("%d", N);
  }
}
