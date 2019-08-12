main(){
  int a, b, tmp1, tmp2, cnt1 = 0, cnt2 = 0, max1 = 0, min1 = 0, max2 = 0, min2 = 0, res1, res2;
  int arr1[10] = {}, arr2[10] = {};
  int ten = 1;
  scanf("%d %d", &a, &b);
  tmp1 = a; tmp2 = b;
  while(1){
    if(tmp1 == 0) break;
    tmp1 /= 10;
    cnt1++;
  }
  while(1){
    if(tmp2 == 0) break;
    tmp2 /= 10;
    cnt2++;
  }
  tmp1 = a; tmp2 = b;
  for(int i=0; i<cnt1; i++){
    arr1[i] = tmp1 % 10;
    tmp1 /= 10;
    if(arr1[i] == 6) arr1[i] = 5;
  }
  for(int i=0; i<cnt1; i++){
    min1 += arr1[i] * ten;
    ten *= 10;
  }
  tmp1 = a; tmp2 = b;
  for(int i=0; i<cnt1; i++){
    arr1[i] = tmp1 % 10;
    tmp1 /= 10;
    if(arr1[i] == 5) arr1[i] = 6;
  }
  ten = 1;
  for(int i=0; i<cnt1; i++){
    max1 += arr1[i] * ten;
    ten *= 10;
  }
  tmp1 = a; tmp2 = b;
  for(int i=0; i<cnt2; i++){
    arr2[i] = tmp2 % 10;
    tmp2 /= 10;
    if(arr2[i] == 5) arr2[i] = 6;
  }
  ten = 1;
  for(int i=0; i<cnt2; i++){
    max2 += arr2[i] * ten;
    ten *= 10;
  }
  tmp1 = a; tmp2 = b;
  for(int i=0; i<cnt2; i++){
    arr2[i] = tmp2 % 10;
    tmp2 /= 10;
    if(arr2[i] == 6) arr2[i] = 5;
  }
  ten = 1;
  for(int i=0; i<cnt2; i++){
    min2 += arr2[i] * ten;
    ten *= 10;
  }
  printf("%d %d", min1 + min2, max1 + max2);
}
