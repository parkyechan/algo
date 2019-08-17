main(){
  int N;
  char a;
  scanf("%d", &N);
  a = getchar();
  for(int st=0; st<N; st++){
    char arr[1001] = {};
    int cnt = 0, first_blank;
    while(1){
      arr[cnt++] = getchar();
      if(arr[cnt-1] == '\n') break;
    }
    for(int i=0; i<cnt; i++){
      if(arr[i] == ' '){
        first_blank = i;
        break;
      }
    }
    printf("%d\n", first_blank);
  }
}
