main(){
  int a, N, *arr = (int *)malloc(sizeof(int) * 100001);
  scanf("%d", &N);
  for(int i=0; i<100000; i++)
    arr[i] = 0;
  for(int i=0; i<N; i++){
    int k = 0;
    scanf("%d", &a);
    while(1){
      for(int k=2; k<a; k++){
        if()
      }
    }
    for(int k=2; k<a; k++){
      if(arr[k] > 0) printf("%d %d\n", k, arr[k]);
    }
  }
}
