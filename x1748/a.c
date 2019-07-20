main(){
  unsigned long long N, cnt = 0, tmp, res = 1;
  scanf("%llu", &N);
  tmp = N;
  while(1){
    if(tmp == 0) break;
    tmp /= 10;
    cnt++;
  }
  if(cnt == 1){
    for(int i=1; i<N; i++){
      res++;
    }
  }else if(cnt == 2){
    for(int i=1; i<9; i++){
      res++;
    }
    for(int i=10; i<=N; i++){
      res++;
      res++;
    }
  }else if(cnt == 3){
    res++;res++;
    for(int i=1; i<9; i++){
      res++;
    }
    for(int i=10; i<99; i++){
      res++;
      res++;
    }
    for(int i=100; i<=N; i++){
      res++;
      res++;
      res++;
    }
  }else if(cnt == 4){
    res++;res++;
    res++;res++;res++;
    for(int i=1; i<9; i++){
      res++;
    }
    for(int i=10; i<99; i++){
      res++;
      res++;
    }
    for(int i=100; i<999; i++){
      res++;
      res++;
      res++;
    }for(int i=1000; i<=N; i++){
      res++;
      res++;
      res++;
      res++;
    }
  }else if(cnt == 5){
    res++;res++;
    res++;res++;res++;
    res++;res++;res++;res++;
    for(int i=1; i<9; i++){
      res++;
    }
    for(int i=10; i<99; i++){
      res++;
      res++;
    }
    for(int i=100; i<999; i++){
      res++;
      res++;
      res++;
    }for(int i=1000; i<9999; i++){
      res++;
      res++;
      res++;
      res++;
    }for(int i=10000; i<=N; i++){
      res++;
      res++;
      res++;
      res++;
      res++;
    }
  }else if(cnt == 6){
    res++;res++;
    res++;res++;res++;
    res++;res++;res++;res++;
    res++;res++;res++;res++;res++;
    for(int i=1; i<9; i++){
      res++;
    }
    for(int i=10; i<99; i++){
      res++;
      res++;
    }
    for(int i=100; i<999; i++){
      res++;
      res++;
      res++;
    }for(int i=1000; i<9999; i++){
      res++;
      res++;
      res++;
      res++;
    }for(int i=10000; i<99999; i++){
      res++;
      res++;
      res++;
      res++;
      res++;
    }for(int i=100000; i<=N; i++){
      res++;
      res++;
      res++;
      res++;
      res++;
      res++;
    }
  }else if(cnt == 7){
    res++;res++;
    res++;res++;res++;
    res++;res++;res++;res++;
    res++;res++;res++;res++;res++;
    res++;res++;res++;res++;res++;res++;
    for(int i=1; i<9; i++){
      res++;
    }
    for(int i=10; i<99; i++){
      res++;
      res++;
    }
    for(int i=100; i<999; i++){
      res++;
      res++;
      res++;
    }for(int i=1000; i<9999; i++){
      res++;
      res++;
      res++;
      res++;
    }for(int i=10000; i<99999; i++){
      res++;
      res++;
      res++;
      res++;
      res++;
    }for(int i=100000; i<999999; i++){
      res++;
      res++;
      res++;
      res++;
      res++;
      res++;
    }for(int i=1000000; i<=N; i++){
      res++;
      res++;
      res++;
      res++;
      res++;
      res++;
      res++;
    }
  }else if(cnt == 8){
    res++;res++;
    res++;res++;res++;
    res++;res++;res++;res++;
    res++;res++;res++;res++;res++;
    res++;res++;res++;res++;res++;res++;
    res++;res++;res++;res++;res++;res++;res++;
    for(int i=1; i<9; i++){
      res++;
    }
    for(int i=10; i<99; i++){
      res++;
      res++;
    }
    for(int i=100; i<999; i++){
      res++;
      res++;
      res++;
    }for(int i=1000; i<9999; i++){
      res++;
      res++;
      res++;
      res++;
    }for(int i=10000; i<99999; i++){
      res++;
      res++;
      res++;
      res++;
      res++;
    }for(int i=100000; i<999999; i++){
      res++;
      res++;
      res++;
      res++;
      res++;
      res++;
    }for(int i=1000000; i<9999999; i++){
      res++;
      res++;
      res++;
      res++;
      res++;
      res++;
      res++;
    }for(int i=10000000; i<=N; i++){
      res++;
      res++;
      res++;
      res++;
      res++;
      res++;
      res++;
      res++;
    }
  }
  printf("%llu", res);
}
