main(){
  int a, b, c, sum = 0, t;
  scanf("%d %d %d", &a, &b, &c);
  for(int i=0; i<c; i++){
    scanf("%d", &t);
    if(t >= a && t <= b) sum++;
  }
  printf("%d", sum);
}
