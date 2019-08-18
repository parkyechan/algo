main(){
  int N;
  long long siz, sum = 0;
  long long arr[1001] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++) scanf("%lld", &arr[i]);
  scanf("%lld", &siz);
  for(int i=0; i<N; i++){
    if(arr[i] / siz > 0){
      sum += (arr[i] / siz + 1) * siz;
    }else if(arr[i] > 0){
      sum += siz;
    }
  }
  printf("%lld", sum);
}
