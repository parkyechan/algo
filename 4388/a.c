main(){
  while(1){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if(a == 0 && b == 0) break;
    int cnt = 0;
    if(a > b){
      while(a != 0){
        long long tmp = a % 10;
        long long tmp2 = b % 10;
        a /= 10;
        b /= 10;
        if(tmp + tmp2 >= 10){
          a += 1;
          cnt++;
        }
      }
    }else if(a < b){
      while(b != 0){
        long long tmp = a % 10;
        long long tmp2 = b % 10;
        b /= 10;
        a /= 10;
        if(tmp + tmp2 >= 10){
          b += 1;
          cnt++;
        }
      }
    }else{
      while(b != 0){
        long long tmp = a % 10;
        long long tmp2 = b % 10;
        a /= 10;
        b /= 10;
        if(tmp + tmp2 >= 10){
          b += 1;
          cnt++;
        }
      }
    }
    printf("%d\n", cnt);
  }
}
