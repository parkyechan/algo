main(){
  int a, b, c, cnt = 0, res;
  scanf("%d %d %d", &a, &b, &c);
  res = (a + b);
  while(res>0){
    if(res<c) break;
    cnt += res / c;
    res = (res / c) + res % c;
    if(res == 1) break;
  }
  printf("%d", cnt);
}
