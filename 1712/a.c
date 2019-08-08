main(){
  int a, b, c, i = 1;
  scanf("%d %d %d", &a, &b, &c);
  if(b >= c){
    printf("-1");
    return 0;
  }
  while(1){
    if(a + b * i < c * i) break;
    i++;
  }
  // if(i == 1) printf("-1");
  printf("%d", i);
}
