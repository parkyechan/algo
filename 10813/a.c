main(){
  int a, b, c, d, tmp, arr[1001] = {};;
  scanf("%d %d", &a, &b);
  for(int i=0; i<103; i++) arr[i] = i;
  for(int i=1; i<=b; i++){
    scanf("%d %d", &c, &d);
    tmp = arr[c];
    arr[c] = arr[d];
    arr[d] = tmp;
  }
  for(int i=1; i<=a; i++) printf("%d ", arr[i]);
}
