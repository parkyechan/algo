main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int cnt = 0;
    char arr[1001] = {};
    scanf("%s", arr);
    while(1){
      if(arr[cnt++] == '\0') break;
    }
    // cnt -= 1;
    int flag = 0, res = 0;
    for(int k=0; k<cnt; k++){
      if(arr[k] == 'O'){
        // printf("k : %d, flag : %d, res : %d\n", k, flag, res);
        flag += 1;
        res += flag;
      }else{
        flag = 0;
      }
    }
    printf("%d\n", res);
  }
}
