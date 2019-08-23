main(){
  int N, arr[1001] = {}, flag, max = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++) scanf("%d", &arr[i]);
  for(int i=0; i<N; i++){
    for(int j=i+1; j<N; j++){
      int cnt = 1;
      flag = arr[j];
      for(int k=j; k<N; k++){
        if(arr[k] > flag){
          flag = arr[k];
          cnt++;
          // printf("%d ", arr[k]);
        }
      }
      // printf("\n");
      if(cnt > max) max = cnt;
    }
  }
  printf("%d", max+1);
}
