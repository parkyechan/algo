main(){
  char arr1[1001] = {};
  char arr2[1001] = {};
  scanf("%s", arr1);
  scanf("%s", arr2);
  int cnt1 = 0, cnt2 = 0;
  while(1){
    if(arr1[cnt1++] == '\0') break;
  }
  while(1){
    if(arr2[cnt2++] == '\0') break;
  }
  if(cnt1 >= cnt2) printf("go");
  else printf("no");
}
