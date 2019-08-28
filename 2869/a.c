main(){
  // while(1){
    long long cnt = 0;
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a >= c){
      printf("1");
      return 0;
    }
    long long sum = 0;
    c -= a;
    cnt++;
    if(c/(a-b) > 0) sum = c / (a-b);
    else cnt++;
    cnt += sum;
    printf("%lld\n", cnt);
  // }
}
