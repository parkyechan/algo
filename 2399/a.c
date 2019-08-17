main(){
  int N;
  long long arr[10001] = {}, sum = 0, tmp;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%lld", &arr[i]);
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      tmp = arr[i] - arr[j];
      if(tmp < 0) tmp = -tmp;
      sum += tmp;
    }
  }
  printf("%lld", sum);
}
