main(){
  int a, b, arr1[1001] = {}, arr2[1001] = {}, t1, t2, cnt = 0, j = 0, min, max;
  scanf("%d %d", &a, &b);
  for(int i=1; i<101; i++){
    arr1[i] = i;
  }
  for(int i=1; i<=b; i++){
    scanf("%d %d", &t1, &t2);
    if(t2 > t1){
      max = t2;
      min = t1;
    }else{
      max = t1;
      min = t2;
    }
    for(int k=1; k<=a; k++){
      if(arr1[k] >= min && arr1[k] <= max){
        arr2[++j] = arr1[k];
        arr1[k] = 101;
      }
    }
    for(int k=1; k<=a; k++){
      if(arr1[k] == 101){
        arr1[k] = arr2[j--];
      }
    }
    j = 0;
  }
  for(int i=1; i<=a; i++){
    printf("%d ", arr1[i]);
  }
}
