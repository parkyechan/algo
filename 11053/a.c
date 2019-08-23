main(){
  int N, flag[1001] = {}, max = 0;
  int arr[1001] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++) scanf("%d", &arr[i]);
  for(int i=0; i<N; i++){
    int big = 0, cnt = 0;
    for(int j=i; j<N; j++){
      // if(arr[j] > arr[i] && arr[j] >= big){
      //   big = arr[j];
      //   flag[i] = j - i - 1;
      // }
      if(arr[j] > arr[i]){
        cnt++;
      }
      if(cnt > max) max = cnt;
    }
  }
  // for(int i=0; i<N; i++){
  //   if(flag[i] > max) max = flag[i];
  // }
  printf("%d", max);
}
