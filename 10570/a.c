main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int a, max = 0, b, arr[1001] = {}, flag;
    scanf("%d", &a);
    for(int j=0; j<a; j++){
      scanf("%d", &b);
      arr[b]++;
    }
    for(int i=1; i<1001; i++){
      if(arr[i] > max ){
        max = arr[i];
        flag = i;
      }
    }
    printf("%d\n", flag);
  }
}
