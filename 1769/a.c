main(){
  long long sum = 0;
  int i = 0, cnt = 0;
  char *arr = (char *)malloc(sizeof(char) * 1000001);
  while(1){
    arr[i++] = getchar();
    if(arr[i-1] == '\n') break;
  }
  for(int k=0; k<i-1; k++) arr[k] -= 48;
  for(int k=0; k<i-1; k++) sum += (long long)arr[k];
  while(1){
    long long a = 0, res = 0;
    if(sum / 10 == 0) break;
    while(1){
      if(sum == 0) break;
      res += (sum % 10);
      sum = sum / 10;
    }
    cnt++;
    sum = res;
  }
  // printf("%d\n", sum);
  printf("%d\n", cnt + 1);
  if(sum % 3 == 0) printf("YES");
  else printf("NO");
}
