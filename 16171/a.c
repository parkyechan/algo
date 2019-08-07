main(){
  int cnt = 0, cnt1 = 0, res_cnt = 0, flag = 0, pres = 0;
  char arr[1001] = {}, str[1001] = {}, tmp[1001] = {};
  scanf("%s", arr);
  scanf("%s", str);
  while(1) if(arr[cnt++] == '\0') break;
  for(int i=0; i<cnt; i++){
    if(arr[i] > 57){
      // for(int j=i; j<cnt; j++){
        tmp[pres++] = arr[i];
      // }
    }
  }
  cnt = 0;
  // printf("%d ", pres);
  // printf("%s\n", tmp);
  while(1) if(str[cnt1++] == '\0') break;
  cnt1 -= 1;
  // printf("%d\n", cnt1);
  for(int i=0; i<=pres - cnt1; i++){
    if(res_cnt == cnt1) break;
    for(int j=0; j<cnt1; j++){
      // printf("%c %c %d\n", tmp[j], str[j], res_cnt);
      if(tmp[j + i] == str[j]){
        res_cnt++;
      }else{
        res_cnt = 0;
        break;
      }
    }
  }
  if(res_cnt == cnt1) flag++;
  // printf("%d %d %d\n", cnt, cnt1, res_cnt);
  if(flag > 0) printf("1");
  else printf("0");
}
