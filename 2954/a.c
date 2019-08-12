main(){
  char arr[1001] = {};
  int cnt = 0;
  while(1){
    arr[cnt++] = getchar();
    if(arr[cnt-1] == '\n') break;
  }
  for(int i=0; i<cnt; i++){
    if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
      arr[i+1] = 1;
      arr[i+2] = 1;
    }
  }
  for(int i=0; i<cnt; i++){
    if(arr[i] == 1){
      for(int k=i; k<cnt; k++){
        arr[k] = arr[k+2];
        arr[k+1] = arr[k+3];
      }
    }
  }
  printf("%s", arr);
}
