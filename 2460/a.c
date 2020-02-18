main(){
  int arr[10][2] = {};
  int sum = 0, max = 0;
  for(int i=0; i<10; i++){
    scanf("%d %d", &arr[i][0], &arr[i][1]);
    sum -= arr[i][0];
    sum += arr[i][1];
    if(sum > max) max = sum;
  }
  printf("%d", max);
}
