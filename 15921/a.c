main(){
  double N;
  scanf("%lf", &N);
  double arr[101] = {};
  if(N == 0){
    printf("divide by zero");
    return 0;
  }
  for(int i=0; i<N; i++){
    scanf("%lf", &arr[i]);
  }
  double sum = 0;
  for(int i=0; i<N; i++){
    sum += arr[i];
  }
  sum /= N;
  double sum2 = 0;
  for(int i=0; i<N; i++){
    sum2 += arr[i] / N;
  }
  printf("%.2lf", (double)(sum / sum2));
}
