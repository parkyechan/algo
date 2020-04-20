int k1, k2;
int isPrime(int a){
  int f = 1;
  for(int i=2; i<a; i++){
    if(a % i == 0){
      f = 0;
      break;
    }
  }
  return f;
}
main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    int arr;
    scanf("%d", &arr);
    int a1 , a2;
    // if((arr/2)%2 != 1){
    //   a1 = arr/2 - 1;
    //   a2 = arr/2 + 1;
    // }else{
      a1 = arr / 2;
      a2 = arr / 2;
    // }
    int r1, r2;
    while(1){
      r1 = isPrime(a1);
      r2 = isPrime(a2);
      if(r1 && r2){
        break;
      }else{
        a1 -= 1;
        a2 += 1;
      }
    }
    printf("%d %d\n", a1, a2);
  }
}
