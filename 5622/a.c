main(){
  char arr[1001] = {};
  scanf("%s", arr);
  int cnt = 0;
  while(arr[cnt++] != '\0');
  cnt -= 1;
  int times = 0;
  for(int i=0; i<cnt; i++){
    int tmp;
    if(arr[i] < 83) tmp = arr[i] -65;
    else if(arr[i] < 89) tmp = arr[i] - 66;
    else tmp = arr[i] - 67;
    times += tmp / 3 + 3;
  }
  printf("%d", times);
}
