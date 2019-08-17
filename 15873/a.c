main(){
  int a, tmp, cnt = 0, flag, r1, r2 = 0, ten = 1;
  scanf("%d", &a);
  tmp = a;
  while(1){
    if(tmp == 0) break;
    tmp /= 10;
    if(tmp % 10 == 0) flag = cnt;
    cnt++;
  }
  tmp = a;
  for(int i=0; i<=flag; i++){
    r2 += (tmp % 10)* ten;
    tmp /= 10;
    ten *= 10;
  }
  tmp = a;
  for(int i=0; i<flag; i++) tmp /= 10;
  printf("tmp : %d\n", tmp);
  printf("%d", r2);
}
