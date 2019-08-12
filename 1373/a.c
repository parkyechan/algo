main(){
  char *arr = (char *)malloc(sizeof(char) * 1000001);
  int *arr2 = (int *)malloc(sizeof(int) * 1000001);
  int cnt = 0, sum = 0, aa = 0;
  while(1){
    arr[cnt++] = getchar();
    if(arr[cnt-1] == '\n') break;
  }
  for(int i=cnt-2; i>=0; i--){
    if(arr[i] == '1') sum += 1;
    if(arr[i-1] == '1') sum += 2;
    if(arr[i-2] == '1') sum += 4;
    i--; i--;
    // printf("%d", sum);
    arr2[aa++] = sum;
    sum = 0;
    // printf("%c", arr[i]);
  }
  // if(aa == 1) printf("")
  for(int i=aa-1; i>=0; i--){
    printf("%d", arr2[i]);
  }
  free(arr); free(arr2);
}
