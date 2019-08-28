main(){
  int N, tmp;
  scanf("%d", &N);
  tmp = N;
  N = N / 3;
  int cnt = 0;
  for(int i=1; i<N; i++){
    for(int j=1; j<N; j++){
      if(i+j >= N) break;
      for(int k=1; k<N; k++){
        if(i+j+k > N) break;
        if(i + j + k == N) cnt++;
      }
    }
  }
  printf("%d", cnt);
}
