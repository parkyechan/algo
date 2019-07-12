main(){
  int N, a, b;
  int arr[30][30] = {};
  for(int j=0; j<15; j++){
    for(int i=1; i<15; i++){
      if(j == 0)
        arr[j][i] = i;
      else{
        for(int k=1; k<=i; k++){
          arr[j][i] += arr[j-1][k];
        }
      }
    }
  }
  // for(int j=0; j<15; j++){
  //   for(int i=1; i<15; i++){
  //     printf("%d ", arr[j][i]);
  //   }
  //   printf("\n");
  // }
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &a, &b);
    printf("%d\n", arr[a][b]);
  }
}
