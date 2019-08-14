main(){
  char arr1[10001] = {}, arr2[10001] = {}, cnt1 = 0, cnt2 = 0, cnt, res[10001];
  while(1){
    arr1[cnt1++] = getchar();
    if(arr1[cnt1] = ' ') break;
  }
    for(int i=0; i<cnt1; i++) printf("%c", arr1[i]);
  for(int i=0; i<cnt1; i++) arr1[i] -= 48;

  printf("\nhh\n");
  while(1){
    arr2[cnt2++] = getchar();
    if(arr2[cnt2-1] = '\n') break;
  }
  for(int i=0; i<cnt2; i++) arr2[i] -= 48;
  if(cnt1 > cnt2) cnt = cnt1;
  else cnt = cnt2;
  for(int i=0; i<cnt; i++){
    res[i] += arr1[i] + arr2[i];
    if(res[i] >= 10){
      res[i] -= 10;
      res[i+1] += 1;
    }
  }
  for(int i=0; i<cnt; i++) res[i] += 48;
  for(int i=0; i<cnt; i++) printf("%c", res[i]);
}
