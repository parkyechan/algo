main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int a, b, c, arr[1001] = {}, sum = 0;
    scanf("%d %d", &a, &b);
    for(int j=0; j<a; j++){
      scanf("%d", &c);
      arr[c]++;
    }
    for(int j=0; j<=a; j++){
      if(arr[j] > 1){
        sum += arr[j];
        sum -= 1;
      }
    }
    printf("res : %d\n", sum);
  }
}
