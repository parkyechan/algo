main(){
  int arr[1001] = {}, N, new[1001] = {}, res, sum = 0;
  scanf("%d", &N);
  for(int i=1; i<=N; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=1; i<=N; i++){
    sum += new[i-1];
    new[i] = arr[i] * i - sum;
    printf("%d ", new[i]);
  }
}
