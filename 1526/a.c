main(){
  int a, tmp, cnt = 0, div = 0, res_cnt = 0, res = 0;
  scanf("%d", &a);
  for(int i=a; i>0; i--){
    tmp = i;
    div = tmp;
    while(1){
      if(tmp == 0) break;

      tmp /= 10;
      cnt++;
    }
    // printf("%d\n", cnt);
    for(int k=0; k<cnt; k++){
      if((div%10) == 4 || (div%10) == 7) res_cnt++;
      // printf("%d %d\n", div, res_cnt);
      div /= 10;
    }
    if(res_cnt == cnt){
      res = i;
      break;
    }
    res_cnt = 0;
    cnt = 0;
  }
  printf("%d", res);
}
