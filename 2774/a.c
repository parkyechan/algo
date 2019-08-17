main(){
  int N, a;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &a);
    int tmp = a, cnt = 0, arr[10] = {}, res = 0;
    while(1){
      if(tmp == 0) break;
      tmp /= 10;
      cnt++;
    }
    tmp = a;
    for(int k=0; k<cnt; k++){
      arr[tmp%10]++;
      tmp /= 10;
    }
    for(int k=0; k<10; k++){
      if(arr[k] > 0) res++;
    }
    printf("%d\n", res);
  }
}
