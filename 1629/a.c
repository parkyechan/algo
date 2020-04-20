main(){
  int a, b, c, cnt = 0;
  scanf("%d %d %d", &a, &b, &c);
  int p = a;
  int res[100] = {}, s[100] = {};
  for(int i=0; i<b; i++){
    p = (a * p) % c;
    if(res[p] != 0) break;
    else{
      res[p]++;
      s[cnt] = p;
      cnt++;
    }
  }
  for(int i=0; i<cnt; i++){
    printf("%d\n", s[i]);
  }
  printf("%d", s[c % b - 1]);
}
