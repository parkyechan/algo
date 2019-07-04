main(){
  int N, a, b, cnt = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &a, &b);
    for(int j=2; j<a; j++){
      for(int k=1; k<j; k++){
        if((k*k+j*j+b)%(k*j) == 0) cnt++;
      }
    }
    printf("%d\n", cnt);
    cnt = 0;
  }
}
