main(){
  int N;
  scanf("%d", &N);
  int res;
  for(int i=1; i<=N; i++){
    int tmp = i;
    int sum = 0;
    while(tmp != 0){
      sum += tmp % 10;
      tmp /= 10;
    }
    if(sum + i== N){
      printf("%d", i);
      break;
    }else if(i == N){
      printf("0");
      break;
    }
  }
}
