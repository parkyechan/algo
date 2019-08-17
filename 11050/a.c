int fac(int a){
  if(a == 1) return 1;
  else if(a == 0) return 1;
  else return a * fac(a-1);
}
main(){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", fac(a) / (fac(a - b) * fac(b)));
}
