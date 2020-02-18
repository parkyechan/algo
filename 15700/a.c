main(){
  int a, b;
  scanf("%d %d", &a, &b);
  int res;
  if(a % 2 == 1 && b % 2 == 1){
    a -= 1;
    res = (a / 2) * b;
    res += (b - 1) / 2;
  }else{
    if(a % 2 == 0){
      res = (a / 2) * b;
    }else if(b % 2 == 0){
      res = (b / 2 ) * a;
    }
  }
  printf("%d", res);
}
