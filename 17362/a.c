main(){
  int N;
  scanf("%d", &N);
  int tmp = N;
  tmp /= 4;
  if(tmp % 2 == 1){
    if(N % 4 == 0) printf("4");
    else if(N%4 == 1) printf("5");
    else if (N%4==2) printf("4");
    else if(N%4 == 3) printf("3");
  }else{
    if(N % 4 == 0) printf("2");
    else if(N%4 == 1) printf("1");
    else if (N%4==2) printf("2");
    else if(N%4 == 3) printf("3");
  }
}
