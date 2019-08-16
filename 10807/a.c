main(){
  int N, arr[1001] = {}, M, cnt = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++) scanf("%d", &arr[i]);
  scanf("%d", &M);
  for(int i=0; i<N; i++) if(arr[i] == M) cnt++;
  printf("%d", cnt);
}
