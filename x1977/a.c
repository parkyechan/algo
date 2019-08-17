main(){
  int a, b, arr[1001] = {}, flag1 = 0, flag2 = 0, sum = 0, flag = 0;
  scanf("%d %d", &a, &b);
  for(int i=1; i<=100; i++){
    if((i * i) >= b && flag == 0){
      flag2 = i;
      flag = 1;
    }
    if((i * i) <= a) flag1 = i;
  }
  printf("%d %d %d %d\n", a, (flag1+1) * (flag1+1), (flag2 * flag2), b);
  if(a <= ((flag1+1) * (flag1+1)) && (flag2 * flag2) <= b){
    for(int i=flag1+1; i<=flag2; i++) sum += i*i;
    printf("%d\n%d", sum, (flag1+1) * (flag1+1));
  }else{
    printf("-1");
  }
}
