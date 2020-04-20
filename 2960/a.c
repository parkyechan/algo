main(){
  int a, b;
  scanf("%d %d", &a, &b);
  int arr[1001] = {};
  int cnt = 0;
  if(b == 1){
    printf("2");
    return 0;
  }
  for(int i=2; i<=a; i++){
    int tmp = i, k = i;
    // printf("---\n");
    if(arr[tmp] != 0) continue;
    while(1){
      if(tmp > a) break;
      if(arr[tmp] != 0){
        tmp += k;
        continue;
      }
      arr[tmp]++;
      // printf("> %d\n", tmp);
      cnt++;
      if(tmp == b){
        printf("%d", cnt);
        return 0;
      }
      tmp += k;
    }
  }
}
