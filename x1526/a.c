main(){
  int N, arr[10] = {}, tmp, cnt = 0, num[10] = {}, cnt2 = 0, cntreal = 0, tmpreal;
  scanf("%d", &N);
  tmpreal = N;
  while(1){
    if(tmpreal == 0) break;
    tmpreal /= 10;
    cntreal++;
  }
  while(1){
    printf("hi");
    N--;
    tmp = N;
    while(1){
      if(tmp == 0) break;
      arr[cnt++] = tmp % 10;
      tmp /= 10;
    }
    for(int i=0; i<cnt; i++){
      if(arr[i] == 4 || arr[i] == 7)
        cnt2++;
    }
  }
  if(cntreal == cnt2){
    for(int i=0; i<cntreal; i++){
      printf("%d", arr[i]);
    }
  }
}
