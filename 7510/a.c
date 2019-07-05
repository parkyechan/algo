main(){
  int N, a, b, c, flag = 0;
  int *arr;
  arr = (int *)malloc(sizeof(int)*40000);
  scanf("%d", &N);
  for(int i=1; i<=N; i++){
    scanf("%d %d %d", &a, &b, &c);
    if(a * a == b * b + c * c) flag = 1;
    else if(b * b == a * a + c * c) flag = 1;
    else if(c * c == b * b + a * a) flag = 1;
    if(flag == 1){
      arr[i] = 1;
    }else if(flag == 0){
      arr[i] = 0;
    }
    flag = 0;
  }
  for(int i=1; i<=N; i++){
    if(arr[i] == 1) printf("Scenario #%d:\nyes\n\n", i);
    else if(arr[i] == 0) printf("Scenario #%d:\nno\n\n", i);
  }
}
