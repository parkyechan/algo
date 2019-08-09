main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int arr[10] = {};
    int sum = 0, max = 0;
    for(int j=0; j<5; j++){
      scanf("%d", &arr[j]);
    }
    for(int j=0; j<2; j++){
      sum = arr[j] + arr[j+1];
      // printf("%d %d %d ", sum, arr[j], arr[j+1]);
      for(int k=j+2; k<5; k++){
        // printf("%d\n", arr[k]);
        sum += arr[k];
        if(sum % 10 > max) max = (sum % 10);
      }
      sum = 0;
    }
    for(int j=4; j>2; j--){
      sum = arr[j] + arr[j+1];
      for(int k=j-2; k>0; k--){
        sum += arr[k];
        if(sum % 10 > max) max = (sum % 10);
      }
      sum = 0;
    }
    if((arr[0] + arr[2] + arr[4]) % 10 > max ) max = (arr[0] + arr[2] + arr[4]) % 10;
    printf("%d\n", max);
  }

}
