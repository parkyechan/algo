main(){
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  double sum = a, res = 0;
  int cnt = 0;
  if(b >= c){
    printf("-1");
    return 0;
  }
  while(sum >= res){
    sum += b;
    res += c;
    cnt++;
  }
  if(cnt == 1){
    printf("1");
    return 0;
  }
  printf("%d", cnt);
}
