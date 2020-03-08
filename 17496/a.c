main(){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int day = 1;
  int cnt = 0;
  while(day < a){
    day += b;
    cnt++;
  }
  if(day <= a) printf("%d", c * d * cnt);
  else printf("%d", c * d * (cnt-1));
}
