main(){
  int arr[1001] = {}, N, new[1001] = {}, res, sum = 0;
  scanf("%d", &N);
  for(int i=1; i<=N; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=1; i<=N; i++){
    for(int k=1; k<i; k++)
      sum += new[k];
    new[i] = arr[i] * i - sum;
    sum = 0;
    printf("%d ", new[i]);
  }
}
