main(){
  int a, b, d1, d2, h, tmp, flag = 0;
  scanf("%d %d", &a, &b);
  if(a > b){
    tmp = b;
    b = a;
    a = tmp;
  }
  d1 = a % 4;
  d2 = b % 4;
  if(d1 == 0) d1 = 4;
  if(d2 == 0) d2 = 4;
  if(d1 > d2){
    tmp = d1;
    d1 = d2;
    d2 = tmp;
    flag = 1;
  }
  h = d2 - d1;
  if(flag == 1){
    b = b + (d2 - d1);
  }else{
    a = a + (d2 - d1);
  }
  printf("%d", (b-a)/4+h);
}
