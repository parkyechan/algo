main(){
  int a, b, s1 = 0, s2 = 0, cnt = 1, s3, s4, t1, t2;
  scanf("%d %d", &a, &b);
  t1 = a;
  t2 = b;
  while(1){
    if(a == 0) break;
    if(a % 10 == 5)
      s1 += (a % 10) * cnt;
    else if(a % 10 == 6)
      s1 += 5 * cnt;
    else
      s1 += (a % 10) * cnt;
    cnt *= 10;
    a /= 10;
  }
  cnt = 1;
  while(1){
    if(b == 0) break;
    if(b % 10 == 5)
      s1 += (b % 10) * cnt;
    else if(b % 10 == 6)
      s1 += 5 * cnt;
    else
      s1 += (b % 10) * cnt;
    cnt *= 10;
    b /= 10;
  }
  cnt = 1;
  a = t1;
  b = t2;
  while(1){
    if(b == 0) break;
    if(b % 10 == 6)
      s2 += (b % 10) * cnt;
    else if(a % 10 == 5)
      s2 += 6 * cnt;
    else
      s2 += (b % 10) * cnt;
    cnt *= 10;
    b /= 10;
  }
  cnt = 1;
  while(1){
    if(a == 0) break;
    if(a % 10 == 6)
      s2 += (a % 10) * cnt;
    else if(a % 10 == 5)
      s2 += 6 * cnt;
    else
      s2 += (a % 10) * cnt;
    cnt *= 10;
    a /= 10;
  }
  printf("%d %d", s1, s2);
}
