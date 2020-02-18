main(){
  int a, b, arr[1001] = {};
  scanf("%d %d", &a, &b);
  int tmp = a;
  for(int i=0; i<10; i++){
    tmp = tmp * a;
    tmp = tmp % b;
    if(arr[tmp] > 0){
      break;
    }
    arr[tmp]++;
  }
  int sum = 0;
  for(int i=0; i<1001; i++){
    if(arr[i] > 0) sum++;
  }
  if(a % b == 0) sum += 1;
  printf("%d", sum);

}
