main(){
  int a, b, c, d, res1, res2, cnt1 = 0, cnt2 = 0, rescnt = 0;
  int arr1[1001] = {}, arr2[1001] = {}, f[1001] = {};
  scanf("%d %d", &a, &b);
  scanf("%d %d", &c, &d);

  /*res1은 분자, res2는 분모*/
  res1 = a * d + c * b;
  res2 = d * b;

  /* 약수 구하는 파트 */
  for(int i=1; i<=res1; i++){
    if(res1 % i == 0) arr1[cnt1++] = i;
  }
  for(int i=1; i<=res2; i++){
    if(res2 % i == 0) arr2[cnt2++] = i;
  }

  /* res1과 res2중에 같은 약수가 있으면 f배열에 넣음*/
  for(int i=0; i<cnt1; i++){
    for(int j=0; j<cnt2; j++){
      if(arr1[i] == arr2[j]) f[rescnt++] = arr1[i];
    }
  }
  rescnt = 0;

  /* f배열에 몇개나 들어가있는지 체크*/
  for(int i=0; i<1001; i++){
    if(f[i] == 0) break;
    rescnt++;
  }

  /* 큰거부터 나눠주는데, res1과 res2에 동시에 나눠진다면 나눔.*/
  for(int i=rescnt-1; i>0; i--){
    if(f[i] != 1){
      if((res1 % f[i] == 0) && (res2 % f[i] == 0)){
        res1 = res1 / f[i];
        res2 = res2 / f[i];
      }
    }
  }
  printf("%d %d", res1, res2);
}
