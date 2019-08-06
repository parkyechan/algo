main(){
  char *arr = (char *)malloc(sizeof(char) * 1000005);
  char *res = (char *)malloc(sizeof(char) * 1000005);
  int i = 0;
  while(~scanf("%s", &arr));
  for(int i=0; i<sizeof(arr); i++) res[i-1] = arr[i-1] - 32;
  for(int k=0; k<i; k++) printf("%c", res[k]);
}
