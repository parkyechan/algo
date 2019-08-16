main(){
  int a, b, c, d,e, res1, res2;
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  res1 = b / d;
  if(b % d != 0) res1 += 1;
  res2 = c / e;
  if(c % e != 0) res2 += 1;
  if(res1 > res2) a -= res1;
  else a -= res2;
  printf("%d", a);
}
