main(){
  double res = 0, max = 0;
  double a, b, c, d, tmp;
  int cnt = -1, flag;
  scanf("%lf %lf", &a, &b);
  scanf("%lf %lf", &c, &d);
  for(int i=0; i<4; i++){
    cnt++;
    res = a / c + b / d;
    // tmp1 = a; tmp2 = d;
    // printf("res : %.lf\n", res);
    // printf("%.lf %.lf\n%.lf %.lf\n\n", a, b, c, d);
    tmp = b;
    b = a;
    a = c;
    c = d;
    d = tmp;
    if(res > max){
      max = res;
      flag = cnt;
    }
  }
  printf("%d", flag);
}
