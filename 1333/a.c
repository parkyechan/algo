main(){
  int n, l, d;
  scanf("%d %d %d", &n, &l, &d);
  int res = 0;
  for(int i=0; i<n; i++){
    res += l;
    if(res + 5 > d) d += d;
    if(res + 5 > d && res < d){
      printf("%d", d);
      return 0;
    }else if(d > res + 5){
      continue;
    }
  }
  printf("%d", res + 5);
}
