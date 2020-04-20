main(){
  int N;
  long long siz, sum = 0;
  long long arr[1001] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++) scanf("%lld", &arr[i]);
  scanf("%lld", &siz);
  long long cnt = 0;
  for(int i=0; i<N; i++){
    if(arr[i] > 0 && arr[i] <= siz) cnt++;
    else if(arr[i] >= siz){
      if(arr[i] % siz == 0) cnt += arr[i] / siz;
      else cnt += (arr[i] / siz) + 1;
    }
  }
  sum = siz * cnt;
  printf("%lld", sum);
}
