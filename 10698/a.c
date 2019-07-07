main(){
  int N, a, b, c, res;
  char q, w;
  scanf("%d", &N);
  for(int i=1; i<=N; i++){
    scanf("%d %c %d %c %d", &a, &q, &b, &w, &c);
    if(q == '+'){
      res = a + b;
    }else if(q == '-'){
      res = a - b;
    }
    printf("Case %d: ", i);
    if(res == c){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
}
