main(){
  int n;
  int arr[10001] = {};
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  int y = 0, m = 0;
  for(int i=0; i<n; i++){
    // if(arr[i] % 30 == 0)
    //   y += (arr[i] / 30) * 10;
    // else
      y += (arr[i] / 30) * 10 + 10;
    // if(arr[i] % 60 == 0)
    //   m += (arr[i] / 60) * 15;
    // else
      m += (arr[i] / 60) * 15 + 15;
  }
  if(y < m){
    printf("Y %d", y);
  }else if(y > m){
    printf("M %d", m);
  }else{
    printf("Y M %d", y);
  }
  // printf("%d %d", y, m);
}
