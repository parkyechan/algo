main(){
  int N, cnt = 0;
  int *arr = (int *)malloc(sizeof(int) * 20001);
  scanf("%d", &N);
  for(int i=1; i<=N; i++) scanf("%d", &arr[i]);
  for(int i=1; i<=N; i++){
    if(i != arr[i]) cnt++;
  }
  printf("%d", cnt);
}
