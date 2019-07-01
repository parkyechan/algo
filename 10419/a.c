main(){
  int N, arr[1001] = {}, cnt = 1;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<N; i++){
    while(1){
      if(cnt + cnt * cnt > arr[i]) break;
      cnt++;
    }
    printf("%d\n", cnt-1);
    cnt = 1;
  }
}
