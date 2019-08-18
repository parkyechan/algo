
int gcd(int a, int b){
  while(b != 0){
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int lcm(int a, int b){
  return a * b / gcd(a ,b);
}

main(){
  int N, a, b;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &a, &b);
    printf("%d %d\n", lcm(a, b), gcd(a, b));
  }
}
