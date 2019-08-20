main(){
  int arr1[1001] = {}, arr2[1001] = {}, arr3[1001] = {};
  int N, tmp = 0, sum = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &arr1[i]);// //
  }
  for(int i=0; i<N; i++){
    scanf("%d", &arr2[i]);
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N-1; j++){
      if(arr1[j] > arr1[j+1]){
        tmp = arr1[j+1];
        arr1[j+1] = arr1[j];
        arr1[j] = tmp;
      }
    }
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N-1; j++){
      if(arr2[j] > arr2[j+1]){
        tmp = arr2[j+1];
        arr2[j+1] = arr2[j];
        arr2[j] = tmp;
      }
    }
  }
  for(int i=0; i<N; i++){
    arr3[i] = arr1[i] * arr2[N-i-1];
  }
  for(int i=0; i<N; i++){
    sum += arr3[i];
  }
  printf("%d", sum);
}
