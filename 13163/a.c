main(){
  char arr[1001] = {}, ds;
  int N;
  scanf("%d", &N);
  ds = getchar();
  for(int i=0; i<N; i++){
    int cnt = 0, t = 0;
    char arr[1001] = {}, tmp[1001] = {};
    while(1){
      arr[cnt++] = getchar();
      if(arr[cnt-1] == '\n') break;
    }
    while(1){
      if(arr[t++] == ' ') break;
    }
    printf("god");
    for(int j=t; j<cnt; j++){
      if(arr[j] != ' ') printf("%c", arr[j]);
    }

  }
}
