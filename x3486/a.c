int reverse(int a){
  int arr[11] = {}, res = 0;
  for(int i=1; i<9; i++){
    arr[i] = a % 10;
    a = a / 10;
  }
  for(int i=1; i<9; i++){
    res += arr[i];
    res *= 10;
  }
  return res;
}
main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int a, b, res, cha1 = 0, cha2 = 0, s1, s2, max, sum, aa = 0;
    scanf("%d %d", &a, &b);
    s1 = a;
    s2 = b;
    while(s1 != 0){
      s1 /= 10;
      cha1++;
    }
    while(s2 != 0){
      s2 /= 10;
      cha2++;
    }
    if(cha1 > cha2) max = cha1;
    else max = cha2;
    a = reverse(a);
    b = reverse(b);
    for(int i=0; i<9 - cha1; i++){
      a /= 10;
    }
    for(int i=0; i<9 - cha2; i++){
      b /= 10;
    }
    sum = a + b;
    res = reverse(sum);
    while(sum != 0){
      sum /= 10;
      aa++;
    }
    for(int i=0; i<9 - aa; i++){
      res /= 10;
    }
    printf("%d\n", res);
  }
}
