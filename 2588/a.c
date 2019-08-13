main(){
  int a, b, arr1[1001] = {}, arr2[1001] = {}, tmp;
  scanf("%d %d", &a, &b);
  tmp = b;
  for(int i=0; i<3; i++){
    arr1[i] = tmp % 10;
    tmp /= 10;
  }
  for(int i=0; i<3; i++) printf("%d\n", arr1[i] * a);
  printf("%d", a * b);
}
