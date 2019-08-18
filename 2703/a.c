main(){
  int N;
  char as;
  scanf("%d", &N);
  as = getchar();
  for(int i=0; i<N; i++){
    char arr[1001] = {}, alpa[1001] = {}, p;
    int cnt = 0;
    while(1){
      arr[cnt++] = getchar();
      if(arr[cnt-1] == '\n') break;
    }
    scanf("%s", alpa);
    p = getchar();
    for(int k=0; k<cnt; k++){
      if(arr[k] >= 65){
        printf("%c", alpa[arr[k] - 65]);
      }else{
        printf("%c", arr[k]);
      }
    }
  }
}
