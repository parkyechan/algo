main(){
  while(1){
    char arr[1001] = {};
    int i = 0, cnt = 0;
    while(1){
    if(arr[i-1] == '\n') break;
      arr[i++] = getchar();
    }
    if(arr[0] == '#') break;
    for(int k=2; k<i; k++){
      if(arr[0] == arr[k]) cnt++;
      else if(arr[0] == arr[k] + 32) cnt++;
      else if(arr[0] == arr[k] - 32) cnt++;
    }
    printf("%c %d\n", arr[0], cnt);
  }
}
