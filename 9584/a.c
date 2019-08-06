main(){
  char str[10] = {};
  int tmp[1001] = {};
  char arr[1001][10] = {};
  int N, res_cnt = 0;
  scanf("%s", str);
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%s", arr[i]);
  }
  for(int i=0; i<N; i++){
    int cnt = 0;
    for(int j=0; j<9; j++){
      if(str[j] == '*'){
        cnt++;
        continue;
      }else if(str[j] == arr[i][j]){
        cnt++;
      }
    }
    if(cnt == 9) tmp[i]++;
  }
  for(int i=0; i<N; i++) if(tmp[i] != 0) res_cnt++;
  printf("%d\n", res_cnt);
  for(int i=0; i<N; i++) if(tmp[i] != 0) printf("%s\n", arr[i]);
}
