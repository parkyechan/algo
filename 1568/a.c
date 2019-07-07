main(){
  int N, sum = 0, cnt = 0, j = 1, flag = 0;
  scanf("%d", &sum);
  while(1){
    if(sum == 0) break;
    flag = 1;
    if(j > sum){
      j = 1;
      continue;
    }else{
      sum -= j++;
    }
    cnt++;
  }
  printf("%d", cnt);
}
