main(){
  int a, b, c, d, a1, b1, c1;
  scanf("%d %d %d", &a, &b, &c);
  scanf("%d", &d);
  c += d;
  if(c >= 60){
    b += c / 60;
    c = c % 60;
  }
  if(b >= 60){
    a += b / 60;
    b = b % 60;
  }
  while(a >= 24){
    a = a - 24;
  }
  printf("%d %d %d", a, b, c);
}
