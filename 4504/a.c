main(){
  int N, a;
  scanf("%d", &N);
  while(1){
    scanf("%d", &a);
    if(a == 0) break;
    if(N % a == 0) printf("%d is NOT a multiple of %d.\n", a, N);
    else if(N % a != 0) printf("%d is a multiple of %d.\n", a, N);
  }
}
