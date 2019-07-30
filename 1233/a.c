main(){
  int a, b, c, arr[8002] = {0, }, res, max = 0, flag = 0;
  scanf("%d %d %d", &a, &b, &c);
  for(int i=1; i<=a; i++){
    for(int j=1; j<=b; j++){
      for(int k=1; k<=c; k++){
        arr[i + j + k]++;
        printf("%d %d %d %d %d\n", arr[i + j + k], i, j, k, i * j * k);
      }
    }
  }
  for(int i=1; i<=8000; i++){
    if(arr[i] > max){
      max = arr[i];
      flag = i;
    }
  }
  printf("%d", flag);
}
