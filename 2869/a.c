main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int sum = (c - b - 1) / (a - b) + 1;
  printf("%d", sum);
}
