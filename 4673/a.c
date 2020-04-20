main(){
  int s = 1;
  int arr[10001] = {};
  for(int i=s; i<10000; i++){
    int tmp = i, sum = i;
    while(tmp < 10001){
      while(tmp){
        sum += tmp % 10;
        tmp /= 10;
      }
      if(sum > 10000) break;
      if(arr[sum] != 0) break;
      arr[sum]++;
      tmp = sum;
    }
  }
  for(int i=1; i<10000; i++){
    if(arr[i] == 0) printf("%d\n", i);
  }
}
