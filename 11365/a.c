main(){
  while(1){
    char arr[1001] = {};
    int cnt = 0;
    while(1){
      arr[cnt++] = getchar();
      if(arr[cnt-1] == '\n') break;
    }
    if(arr[0] == 'E' && arr[1] == 'N' && arr[2] == 'D') break;
    for(int i=cnt-2; i>=0; i--) printf("%c", arr[i]);
    printf("\n");
  }
}
