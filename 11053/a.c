main(){
  int N;
  int arr[1001] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &arr[i]);
  }
  int max = 0;
  for(int i=N-1; i>0; i--){
    int cnt = 1;
    int tmp = arr[i];
    for(int j=i; j>0; j--){
      if(arr[j] < tmp){
        tmp = arr[j];
        cnt++;
      }
    }
    if(cnt > max) max = cnt;
  }
  printf("%d", max+1);
}
