main(){
  int N, arr[1001] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=1; i<N; i++){
    int flag = 0;
    if(arr[0] % arr[i] == 0){
      printf("%d/1\n", arr[0]/arr[i]);
    }else{
      for(int j=arr[i]-1; j>0; j--){
        if(arr[0] % j == 0 && arr[i] % j == 0){
          flag = j;
          break;
        }
        // printf("%d %d %d %d %d\n", arr[0], j, arr[i], j, flag);
      }
      printf("%d/%d\n", arr[0] / flag, arr[i] /flag);
    }
  }
}
