main(){
  int cnt = 0;
  char arr[1001] = {};
  while(1){
    arr[cnt++] = getchar();
    if(arr[cnt-1] == '\n') break;
  }
  for(int i=0; i<cnt; i++){
    if(arr[i] >= 65 && arr[i] <= 77) arr[i] += 13;
    else if(arr[i] >= 78 && arr[i] <= 90) arr[i] -= 13;
    else if(arr[i] >= 97 && arr[i] <= 109) arr[i] += 13;
    else if(arr[i] >= 110 && arr[i] <= 122) arr[i] -= 13;
  }
  printf("%s", arr);
}
