main(){
  int arr[5] = {};
  int arr2[3] = {};
  for(int i=0; i<4; i++) scanf("%d", &arr[i]);
  for(int i=0; i<2; i++) scanf("%d", &arr2[i]);
  int min = 2147000;
  for(int i=0; i<4; i++){
    if(arr[i] < min) min = arr[i];
  }
  int sum = 0;
  int flag = 0;
  for(int i=0; i<4; i++){
    if(arr[i] == min && flag == 0){
      flag = 1;
      continue;
    }
    sum += arr[i];
  }
  int max2;
  if(arr2[0] > arr2[1]) max2 = arr2[0];
  else max2 = arr2[1];
  printf("%d", sum+max2);
}
