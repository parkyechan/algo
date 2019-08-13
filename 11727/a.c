main(){
  int N, a = 0, cnt = 1, b, flag = 0;
  scanf("%d", &N);
  b = N / 2;
  if(N%2 == 1) flag = 1;
  for(int i=0; i<b; i++) cnt *= 3;
  if(flag == 1){
    cnt = cnt * (b + 1);
  }else{
    cnt = cnt * b;
  }
  printf("%d", cnt);
}
