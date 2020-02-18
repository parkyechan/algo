main(){
  int arr[11] = {}, avg = 0, mos, res[1001] = {};
  for(int i=0; i<10; i++){
    scanf("%d", &arr[i]);
    res[arr[i]]++;
    avg += arr[i];
  }
  int max = 0;
  for(int i=0; i<1001; i++){
    if(res[i] > max){
      max = res[i];
      mos = i;
    }
  }
  printf("%d\n%d", avg/10, mos);

}
