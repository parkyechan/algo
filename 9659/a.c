main(){
  long long N, a;
  scanf("%lld", &N);
  a = N / 3;
  if(a % 2 == 1){
    if(N % 3 == 1) printf("CY");
    else if(N % 3 == 2) printf("SK");
    else printf("SK");
  }else{
    if(N % 3 == 1) printf("SK");
    else if(N % 3 == 2) printf("CY");
    else printf("CY");
  }
}
