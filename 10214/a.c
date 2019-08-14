main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int a, b;
    int sum1 = 0, sum2 = 0;
    for(int j=0; j<9; j++){
      scanf("%d %d", &a, &b);
      sum1 += a;
      sum2 += b;
    }
    if(sum1 > sum2) printf("Yonsei\n");
    else if(sum2 > sum1) printf("Korea\n");
    else printf("Draw\n");
  }
}
