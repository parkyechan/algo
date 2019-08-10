main(){
  int N, flag = 0, res = 0 ;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int arr[10] = {};
    int sum = 0, max = 0;
    for(int j=0; j<5; j++){
      scanf("%d", &arr[j]);
    }
    for(int j=0; j<3; j++){
      sum = arr[j] + arr[j+1];
      printf("%d %d ", arr[j], arr[j+1]);
      for(int k=j+2; k<5; k++){
        printf("%d\n", arr[k]);
        sum += arr[k];
        if(sum % 10 > max) max = (sum % 10);
        // printf("%d\n", sum);
        sum -= arr[k];
      }
    }
    // printf("\n\n");
    for(int j=4; j>1; j--){
      sum = arr[j] + arr[j-1];
      printf("%d %d %d ", sum, arr[j], arr[j+1]);
      for(int k=j-2; k>=0; k--){
        printf("%d\n", sum);
        sum += arr[k];
        if(sum % 10 > max) max = (sum % 10);
        sum -= arr[k];
      }
    }
    if((arr[0] + arr[2] + arr[4]) % 10 > max ) max = (arr[0] + arr[2] + arr[4]) % 10;
    if(max > res){
      res = max;
      flag = i + 1;
    }
    // printf("max : %d\n", max);
  }
  printf("%d", flag);

}
