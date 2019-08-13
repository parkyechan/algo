main(){
  unsigned long long a, tmp;
  int arr[20] = {}, cnt = 0, flag = 0;
  scanf("%llu", &a);
  tmp = a;
  while(1){
    if(tmp == 0) break;
    arr[cnt++] = tmp % 10;
    tmp /= 10;
  }
  for(int i=0; i<cnt-2; i++){
    if(arr[i] - arr[i+1] != arr[i+1] - arr[i+2]) flag = 1;
  }
  if(flag == 1) printf("흥칫뿡!! <(￣ ﹌ ￣)>");
  else printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!");
}
