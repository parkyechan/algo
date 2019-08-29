main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    char arr[1001] = {};
    scanf("%s", arr);
    int sum = 0;
    for(int i=0; i<16; i++) arr[i] -= 48;
    for(int i=0; i<16; i++){
      if(i%2 == 0){
        arr[i] *= 2;
        if(arr[i] >= 10){
          sum += 1;
          sum += arr[i] % 10;
        }else{
          sum += arr[i];
        }
      }
    }
    if(sum % 10 == 0) printf("T\n");
    else printf("F\n");
  }
}
