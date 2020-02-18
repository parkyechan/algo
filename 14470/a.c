main(){
  int a, b, c, d, e;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  int flag = 0;
  if(a < 0 && b < 0) flag = 1;
  else if(a < 0 && b > 0) flag = 2;
  else if(a > 0 && b > 0) flag = 3;
  int res;
  if(flag == 1){
    res = (b - a) * d;
  }else if(flag == 2){
    a = -a;
    res = a * c + b * e + d;
  }else if(flag == 3){
    res = (b - a) * e;
  }
  printf("%d", res);
}
