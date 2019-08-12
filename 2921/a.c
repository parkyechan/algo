main(){
  int a, res = 0;
  scanf("%d", &a);
  for(int i=0; i<=a; i++){
    res += (i+1) * i;
  }
  for(int i=0; i<=a; i++){
    for(int j=0; j<=i; j++){
      res += j;
    }
  }
  printf("%d", res);
}
