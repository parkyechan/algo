main(){
  int N, winner, max = 0, tmp;
  scanf("%d", &N);
  for(int i=1; i<=N; i++){
    int  sum = 0, arr[10] = {};
    for(int k=0; k<5; k++){
      scanf("%d", &arr[i]);
    }
    for(int t=0; t<3; t++){
      for(int j=i; j<i+2; j++){
        sum += arr[j];
      }
      sum = sum % 10;
      if(sum > max){
        max = sum;
        winner = i;
      }
      sum = 0;
    }
  }
  printf("%d", winner);
}
