main(){
  int N, arr[1001] = {}, tmp, cnt = 0, flag = 0, max = 0;
  scanf("%d", &N);
  tmp = N;
  while(1){
    if(tmp == 0) break;
    tmp /= 10;
    cnt++;
  }
  tmp = N;
  while(1){
    if(tmp%10 == 9) arr[6]++;
    else arr[tmp % 10]++;
    tmp /= 10;
    if(tmp == 0) break;
  }
  if(arr[6] % 2 == 1) flag = 1;
  arr[6] = arr[6] / 2;
  if(flag == 1) arr[6] += 1;
  for(int i=0; i<=9; i++){
    if(arr[i] > max) max = arr[i];
  }
  printf("%d", max);
}
