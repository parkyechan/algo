main(){
  int a, b, arr[1001] = {}, tmp;
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<a; i++){
    for(int j=0; j<a-1; j++){
      if(arr[j] > arr[j+1]){
        tmp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = tmp;
      }
    }
  }
  for(int i=0; i<a; i++){
    if(arr[i] <= b) b++;
  }
  printf("%d", b);
}
