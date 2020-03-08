main(){
  int N, arr[1001][5] = {}, res[1001] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &arr[i][0], &arr[i][1]);
  }
  // for(int i=0; i<N; i++) res[i] = N;
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(arr[j][0] > arr[i][0] && arr[j][1] > arr[i][1]) res[i]++;
    }
  }
  for(int i=0; i<N; i++){
    printf("%d ", res[i]+1);
  }
}
