main(){
  int arr[1001] = {}, sum = 0, max = 0, flag;
  for(int i=1; i<6; i++){
    for(int j=0; j<4; j++){
      scanf("%d", &arr[j]);
      sum += arr[j];
    }
    if(sum > max){
      max = sum;
      flag = i;
    }
    sum = 0;
  }
  printf("%d %d", flag, max);
}
