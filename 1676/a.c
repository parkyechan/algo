long long fac(long long a){
  if(a == 1){
    arr[a] = 1;
    return 1;
  }
  else if(a == 0){
    arr[a] = 1;
    return 1;
  }
  else if(arr[a-1] != 0){
    return a * arr[a-1];
  }else{
    printf("%llu", a);
    arr[a] = a * fac(a-1);
    return a * fac(a-1);
  }
}
main(){
  long long N, cnt = 0;
  scanf("%llu", &N);
  N = fac(N);
  // while(1){
  //   if(N % 10 == 0) cnt++;
  //   else{
  //     break;
  //   }
  //   N /= 10;
  // }
  printf("%llu", N);
}
