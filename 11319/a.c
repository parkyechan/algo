main(){
  int N;
  char dd;
  scanf("%d", &N);
  dd = getchar();
  for(int i=0; i<N; i++){
    char arr[1002] = {}, alpa[26] = {};
    int cnt = 0, res_cnt = 0, moum = 0, m2 = 0, ab = 0;
    while(1){
      arr[cnt++] = getchar();
      if(arr[cnt-1] == '\n') break;
    }
    for(int j=0; j<cnt; j++){
      if(arr[j] > 96) arr[j]-= 97;
      else arr[j] -= 65;
      alpa[arr[j]]++;
    }
    for(int j=0; j<26; j++){
      ab += alpa[j];
      if(alpa[j] > 0) res_cnt++;
      if(j == 0 || j == 4 || j == 8 || j == 14 || j == 20){
        if(alpa[j] > 0) m2++;
        moum += alpa[j];
      }
    }
    printf("%d %d\n", ab-moum, moum);
  }
}
