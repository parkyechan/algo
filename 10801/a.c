main(){
  int arr1[20] = {}, arr2[20] = {}, sum1 = 0, sum2 = 0, d = 0;
  for(int i=0; i<10; i++) scanf("%d", &arr1[i]);
  for(int i=0; i<10; i++) scanf("%d", &arr2[i]);
  for(int i=0; i<10; i++){
    if(arr1[i] > arr2[i]) sum1++;
    else if(arr1[i] < arr2[i]) sum2++;
    else d++;
  }
  if(sum1 > sum2) printf("A");
  else if(sum2 > sum1) printf("B");
  else printf("D");
}
