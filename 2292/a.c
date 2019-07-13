main(){
  int N, cnt = 0, sum = 2, sum2 = 2;
  scanf("%d", &N);
  if(N == 1){
    printf("1");
  }else{
    while(1){
      sum += 6 *cnt;
      sum2 += 6 * (cnt + 1);
      if(N >= sum && sum2 > N){
        printf("%d", cnt+2);
        break;
      }
      cnt++;
    }
  }
}
