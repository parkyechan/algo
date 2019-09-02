main(){
  int a;
  int N;
  scanf("%d", &N);
  for(int k=0; k<N; k++){
    scanf("%d", &a);
    int tmp = 0, sum = 0;
    for(int i=1; i<=a; i++){
      for(int j=1; j<=i+1; j++){
        tmp += j;
      }
      sum += i * tmp;
    }
    printf("%d\n",sum);
  }
}
