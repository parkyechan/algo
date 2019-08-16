main(){
  while(1){
    int a, b, c, d, cnt = 0, t1, t2, t3, t4;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a == 0 && b == 0 && c == 0 && d == 0) break;
    while(1){
      t1 = a - b; t2 = b - c; t3 = c - d; t4 = d - a;
      if(t1 < 0) t1 = -t1;
      if(t2 < 0) t2 = -t2;
      if(t3 < 0) t3 = -t3;
      if(t4 < 0) t4 = -t4;
      if(a == b && a == c && a == d) break;
      cnt++;
      a = t1; b = t2; c = t3; d = t4;
    }
    printf("%d\n", cnt);
  }
}
