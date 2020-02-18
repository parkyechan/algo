main(){
  int N;
  scanf("%d", &N);
  int tmp = N;
  int cnt = 0;
  if(N == 0){
    printf("0");
    return 0;
  }
  while(tmp){
    tmp /= 10;
    cnt++;
  }
  tmp = N;
  int ec = 1, en = 0, mul;
  for(int i=0; i<cnt; i++){
    mul = tmp % 10;
    tmp /= 10;
    en += ec * mul;
    ec *= 8;
  }
  tmp = en;
  int arr[333334] = {};
  int c = 0;
  while(tmp / 2 != 0){
    arr[c++] = tmp % 2;
    tmp /= 2;
  }
  if(tmp % 2 != 0) arr[c++] = 1;
  for(int i=c-1; i>=0; i--) printf("%d", arr[i]);
}
