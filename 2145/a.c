main(){
  while(1){
    int N, sum = 0, tmp;
    scanf("%d", &N);
    if(N == 0) break;
    if(N < 10){
      printf("%d\n", N);
    }else{
      while(1){
        if(N / 10 == 0){
          printf("%d\n", sum);
          break;
        }
        sum = 0;
        tmp = N;
        while(1){
          sum += tmp % 10;
          // printf("sum%d\n", sum);
          tmp /= 10;
          if(tmp == 0) break;
        }
        N = sum;
      }
    }
  }
}
