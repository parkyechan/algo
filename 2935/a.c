main(){
  int cnt1 = 0, cnt2 = 0, flag = 0, pl = 0, gop = 0, res1 = 1;;
  char *arr1 = (char *)malloc(sizeof(char) * 1001);
  char arr2, tmp;
  char *arr3 = (char *)malloc(sizeof(char) * 1001);
  scanf("%s", arr1);
  arr2 = getchar();
  tmp = getchar();
  scanf("%s", arr3);
  while(1) if(arr1[cnt1++] == '\0') break;
  while(1) if(arr3[cnt2++] == '\0') break;
  printf("%d %d\n", cnt1, cnt2);
  if(cnt1 == cnt2) flag = 1;
  if(arr2 == '*') gop = 1;
  else gop = 1;
  if(gop == 1){
    printf("1");
    for(int i=0; i<(cnt1 - 1) * (cnt2 - 1); i++) printf("0");
  }
  // printf("%d", res1);
}
