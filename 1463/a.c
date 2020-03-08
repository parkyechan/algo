main(){
  int N, cnt = 0;
  scanf("%d", &N);
  while(N % 3 == 0){
    N /= 3;
    cnt++;
  }
  if(N == 2) printf("1");
  if(N == 1) printf("0");
}
