main(){
  int arr[25] = {};
  for(int i=1; i<=20; i++) arr[i] = i;
  int p1, p2;
  for(int i=1; i<=10; i++){
    scanf("%d %d", &p1, &p2);
    int tmp;
    int tt = p2;
    for(int j=p1; j<=(p1+p2)/2; j++){
      tmp = arr[j];
      arr[j] = arr[tt];
      arr[tt--] = tmp;
    }
  }
  for(int i=1; i<=20; i++) printf("%d ", arr[i]);
}
