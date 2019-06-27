main(){
  char arr[1001] = {}, a;
  int N, j = 0;
  scanf("%d", &N);
  a = getchar();
  for(int i=1; i<=N; i++){
    while(1){
      arr[j] = getchar();
      if(arr[j] == '\n') break;
      j++;
    }
    arr[j] = '\0';
    j = 0;
    printf("%d. ", i);
    printf("%s\n", arr);
  }
}
