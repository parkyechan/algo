main(){
  int a, b, c, cnt = 0, res, res2, avail = 0;
  scanf("%d %d %d", &a, &b, &c);
  res = a + b;
  while(res > 0){
    res = res / c;
    cnt++;
  }
  res2 = cnt;
  while(res2>0){
    res2 = res2 / c;
    cnt++;
  }
  printf("%d", cnt);
}
