main(){
  int N;
  char a;
  scanf("%d", &N);
  a =getchar();
  for(int i=0; i<N; i++){
    char arr[1001] = {}, tmp[1001] = {};
    int cnt = 0, blank = 0, t = 0;
    while(1){
      arr[cnt++] = getchar();
      if(arr[cnt-1] == '\n') break;
    }
    while(1){
      tmp[t] = arr[t];
      if(arr[t++] == ' ') blank++;
      if(blank == 2) break;
    }
    for(int j=t; j<cnt-1; j++) printf("%c", arr[j]);
    printf(" %s", tmp);
    printf("\n");
  }
}
