main(){
  int a;
  scanf("%d", &a);
  for(int i=1; i<=a; i++){
    int arr[10] = {};
    int tmp = i, cnt = 0;
    while(1){
      if(tmp == 0) break;
      arr[cnt++] = tmp % 10;
      tmp /= 10;
    }
  }
}
