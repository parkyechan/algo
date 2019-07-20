main(){
  int N, *arr = (int *)malloc(sizeof(int)*500000), tmp, cnt = 0, sum = 0, cnt2= 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<N; i++){
    if(arr[i] != 1){
      sum += arr[i];
      cnt++;
    }else{
      cnt2++;
    }
  }
  if(cnt2 == N) sum = 1;
  else{
    sum -= cnt;
    sum += 1;
  }
  printf("%d", sum);
}
