main(){
  int a, b, arr[1001] = {}, sum = 0, k = 0, flag = 0;
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    scanf("%d", &arr[i]);
  }
  while(sum <= b){
    sum += arr[k++];
    if(k == a) {
      break;
    }
  }
  if(sum > b) printf("%d", k-1);
  else printf("%d", k);
}
