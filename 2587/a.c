main(){
  int a, b, c, d, e, sum = 0, mid, arr[5] = {}, tmp;
  for(int i=0; i<5; i++) scanf("%d", &arr[i]);
  for(int i=0; i<5; i++) sum += arr[i];
  for(int i=0; i<5; i++){
    for(int j=0; j<4; j++){
      if(arr[j] > arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
  printf("%d\n%d", sum/5, arr[2]);

}
