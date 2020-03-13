main(){
  int a, b;
  scanf("%d %d", &a, &b);
  int arr[1001] = {};
  for(int i=0; i<b; i++){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    for(int j=x; j<=y; j++){
      arr[j] = z;
    }
  }
  for(int i=1; i<=a; i++){
    printf("%d ", arr[i]);
  }
}
