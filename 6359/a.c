main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int a;
    scanf("%d", &a);
    int arr[1001] = {};
    int cnt = 1;
    for(int j=1; j<=a; j++){
      for(int k=1; k<=a; k++){
        if(k % j == 0 && arr[k] == 0) arr[k] = 1;
        else if(k % j == 0 && arr[k] == 1) arr[k] = 0;
      }
    }
    int count = 0;
    for(int j=1; j<=a; j++){
      if(arr[j] == 0) count++;
    }
    printf("%d\n", a - count);
  }
}
