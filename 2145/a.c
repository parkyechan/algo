main(){
  unsigned long long a, b, cnt;
  scanf("%llu %llu", &a, &b);
  if(a > b){
    cnt = a;
    a = b;
    b = cnt;
  }
  if(a == b){
    printf("0");
  }else{
    printf("%llu\n", b - a - 1);
    if((b-a) == 1 || (a-b) == 1){

    }
    else{
      for(unsigned long long i = a + 1; i < b; i++){
        printf("%llu ", i);
      }
    }
  }
}
