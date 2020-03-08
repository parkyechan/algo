main(){
  double x, y;
  scanf("%lf %lf", &y, &x);
  double n, a, b;
  scanf("%lf", &n);
  for(int i=0; i<n; i++){
    scanf("%lf %lf", &b, &a);
    if(a / b > x / y){
      x = a;
      y = b;
    }
  }
  printf("%.2lf", 1000 / x * y);
}
