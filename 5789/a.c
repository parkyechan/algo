main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    char arr[1001] = {};
    int flag;
    scanf("%s", arr);
    for(int j=0; j<1001; j++){
      if(arr[j] == '\0'){
        flag = j;
        break;
      }
    }
    if(arr[flag/2] == arr[flag/2-1]) printf("Do-it\n");
    else printf("Do-it-Not\n");
  }
}
