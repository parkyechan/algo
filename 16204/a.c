main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(b > c){
    printf("%d", c + a - b);
  }else if(b == c){
    printf("%d", a);
  }else{
    printf("%d", a - c + b);
  }
}
