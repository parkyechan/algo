main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int p, k = 0;
    char arr[1001] = {};
    scanf("%d %s", &p, arr);
    while(1){
      if(arr[k++] == '\0') break;
    }
    for(int j=p-1; j<k; j++){
      arr[j] = arr[j+1];
    }
    arr[k] = '\0';
    printf("%s\n", arr);
  }
}
