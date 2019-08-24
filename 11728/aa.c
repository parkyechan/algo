main(){
  int a, b;
  int *arr = (int *)malloc(sizeof(int) * 1000000);
  int *arr2 = (int *)malloc(sizeof(int) * 1000000);
  int *arr3 = (int *)malloc(sizeof(int) * 2000000);
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++) scanf("%d", &arr[i]);
  for(int i=a; i<a+b; i++) scanf("%d", &arr2[i]);
  for(int i=0; i<a; i++) arr3[i] = arr[i];
  for(int i=a; i<a+b; i++) arr3[i] = arr2[i];
  // for(int i=0; i<a+b; i++)
  int tmp;
  for(int i=0; i<a+b; i++){
    for(int j=0; j<a+b-1; j++){
      if(arr3[j] > arr3[j+1]){
        tmp = arr3[j];
        arr3[j] = arr3[j+1];
        arr3[j+1] = tmp;
      }
    }
  }
  for(int i=0; i<a+b; i++) printf("%d ", arr3[i]);
}
