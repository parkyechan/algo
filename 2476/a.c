main(){
  int N, a, b, c, max = 0, res;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c){
      res = 10000 + a * 1000;
    }else if(a == b && b != c || b == c & a != b || a == c && b != c){
      if(a == b) res = 1000 + a * 100;
      else if(b == c) res = 1000 + b * 100;
      else if (a == c) res = 1000 + c * 100;
    }else{
      if(a > b && b > c || a > c && c > b) res = a * 100;
      else if(b > c && c > a || b > a && a > c) res = b * 100;
      else if(c > a && a > b || c > b && b > a) res = c * 100;
    }
    if(res > max) max = res;
  }
  printf("%d", max);
}
