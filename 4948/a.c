main(){
  int arr[123456 * 2] = {};
  for(int i=2; i<=123456; i++){
    int tmp = i;
    if(arr[tmp] != 0) continue;
    int k = 2;
    while(tmp <= 123456 * 2){
      int cc = tmp * k;
      k++;
      if(cc > 123456 * 2) break;
      arr[cc]++;
    }
  }
  // for(int i=2; i<=123456; i++){
  //   if(arr[i] == 0) printf("%d\n", i);
  // }
  while(1){
    int x;
    scanf("%d", &x);
    if(x == 0) break;
    int cnt = 0;
    for(int i=x+1; i<=2*x; i++){
      if(arr[i] == 0) cnt++;
    }
    printf("%d\n", cnt);
  }
}
