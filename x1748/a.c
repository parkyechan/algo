main(){
  int N, tmp, cnt = 0, nano, minus = 1, res = 0, sum;
  scanf("%d", &N);
  tmp = N;
  while(1){
    if(tmp == 0) break;
    tmp /= 10;
    cnt++;
  }
  while(1){
    if(cnt == 0) break;
    for(int i=0; i<cnt-1; i++) minus *= 10;
    sum = N - minus;
    for(int i=0; i<=sum; i++) res += cnt;
    cnt--;
  }
  printf("sum: %d\n", sum);
  printf("res: %d", res);
}
