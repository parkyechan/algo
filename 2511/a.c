main(){
  int arr1[10] = {}, arr2[10] = {};
  for(int i=0; i<10; i++){
    scanf("%d", &arr1[i]);
  }
  for(int i=0; i<10; i++){
    scanf("%d", &arr2[i]);
  }
  int cnt1 = 0, cnt2 = 0;
  for(int i=0; i<10; i++){
    if(arr1[i] > arr2[i]) cnt1+=3;
    else if(arr1[i] < arr2[i]) cnt2+=3;
    else{
      cnt1++; cnt2++;
    }
  }
  printf("%d %d\n", cnt1, cnt2);
  if(cnt1 > cnt2) printf("A");
  else if(cnt1 < cnt2) printf("B");
  else{
    int s = 0;
    for(int i=9; i>=0; i--){
      if(arr1[i] != arr2[i]){
        s = i;
        break;
      }
    }
    if(s != 0){
      if(arr1[s] > arr2[s])
        printf("A");
      else
        printf("B");
    }
    else printf("D");
  }
}
