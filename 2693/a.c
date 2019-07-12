main(){
  int N, arr[1001] = {}, tmp;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    for(int j=0; j<10; j++){
      scanf("%d", &arr[j]);
    }
    for(int p=0; p<10; p++){
      for(int q=0; q<9; q++){
        if(arr[q] > arr[q+1]){
          tmp = arr[q+1];
          arr[q+1] = arr[q];
          arr[q] = tmp;
        }
      }
    }
    printf("%d\n", arr[7]);
  }
}
