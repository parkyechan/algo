main(){
  int N;
  scanf("%d", &N);
  int flag = 0;
  if(N%5 == 0) flag = 1;
  int sum = 0;
  if(N / 5 > 0){
    sum += N / 5;
    N /=5;
  }
  if(flag == 0) sum += 1;
  printf("%d", sum);
}
