main(){
  int N, a, b, tmp, tmp2, res1, res2;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &a, &b);
    if(a > b){
      tmp = a;
      a = b;
      b = tmp;
    }
    tmp2 = a;
    for(int j = 1; j<=a; j++){
      tmp = j;
      if(tmp2 * j % b == 0) break;
      tmp2++;
    }
    res1 = tmp2 * tmp;
    printf("%d", res1);
  }
}
