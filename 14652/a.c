main(){
  int a, b, c, flag = 0;
  int cnt = 0;
  int arr[101][101] = {};
  scanf("%d %d %d", &a, &b, &c);
  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      if(cnt == c & flag == 0){
        printf("%d %d", i, j);
        flag = 1;
        break;
      }
      cnt++;
    }
  }
}
