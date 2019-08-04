main(){
  char *arr = (char *)malloc(sizeof(char) * 1000005);
  char *res = (char *)malloc(sizeof(char) * 1000005);
  int i = 0;
  while(1){
    arr[i++] = getchar();
    if(arr[i-1] == '\n') break;
    res[i-1] = arr[i-1] - 32;
  }
  for(int k=0; k<i; k++) printf("%c", res[k]);
}
