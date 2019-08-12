main(){
  int arr[1001] = {};
  int a, b, q, w;
  scanf("%d %d", &a, &b);
  for(int i=0; i<b; i++){
    scanf("%d %d", &q, &w);
    arr[q]++; arr[w]++;
  }
  for(int i=1; i<=a; i++) printf("%d\n", arr[i]);
}
