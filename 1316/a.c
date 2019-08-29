main(){
  int N, sum = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    char arr[1001] = {};
    int cnt = 0, alpa[30] = {}, flag = 0;
    scanf("%s", arr);
    while(1){
      if(arr[cnt++] == '\0') break;
    }
    for(int j=0; j<cnt; j++) arr[j] -= 97;
    for(int j=0; j<cnt; j++){
      if(arr[j] == arr[j+1]){
        continue;
      }else{
        alpa[arr[j]]++;
      }
      for(int k=0; k<26; k++){
        if(alpa[k] > 1) flag++;
      }
    }
    if(flag == 0) sum++;
  }
  printf("%d", sum);
}
