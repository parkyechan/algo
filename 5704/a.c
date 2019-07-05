main(){
  int i = 0, cnt = 0;
  char arr[1001] = {};
  while(1){
    int alpa[27] = {};
    while(1){
      arr[i++] = getchar();
      if(arr[i-1] == '\n') break;
    }
    if(arr[0] == '*') break;
    for(int k=0; k<i; k++){
      alpa[arr[k]-97]++;
    }
    for(int k=0; k<27; k++){
      if(alpa[k] >= 1) cnt++;
    }
    if(cnt == 26) printf("Y\n");
    else printf("N\n");
    cnt = 0;
    i = 0;
  }
}
