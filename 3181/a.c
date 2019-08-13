main(){
  char arr[1001] = {};
  int cnt = 0;
  while(1){
    arr[cnt++] = getchar();
    if(arr[cnt-1] == '\n') break;
  }
  printf("%c", arr[0] - 32);
  for(int i=0; i<cnt; i++){
    if(arr[i] == ' '){
      if((arr[i+1] == 'i' && arr[i+2] == ' ')||
      (arr[i+1] == 'p' && arr[i+2] == 'a' && arr[i+3] == ' ') ||
      (arr[i+1] == 't' && arr[i+2] == 'e' && arr[i+3] == ' ') ||
      (arr[i+1] == 'n' && arr[i+2] == 'i' && arr[i+3] == ' ') ||
      (arr[i+1] == 'n' && arr[i+2] == 'i' &&arr[i+3] == 't' && arr[i+4] == 'i'  && arr[i+5] == ' ' )||
      (arr[i+1] == 'a' && arr[i+2] == ' ' ) ||
      (arr[i+1] == 'a' && arr[i+2] == 'l' && arr[i+3] == 'i'  && arr[i+4] == ' ')||
      (arr[i+1] == 'n' && arr[i+2] == 'e' && arr[i+3] == 'g' && arr[i+4] == 'o'  && arr[i+5] == ' ')||
      (arr[i+1] == 'n' && arr[i+2] == 'o'  && arr[i+3] == ' ') ||
      (arr[i+1] == 'i' && arr[i+2] == 'l' && arr[i+3] == 'i'  && arr[i+4] == ' ' )){
      // if(arr[i+1] == 'a' && arr[i+2] == 'l' && arr[i+3] == 'i'){
        continue;
      }
      printf("%c", arr[i+1] - 32);
    }
  }
}
