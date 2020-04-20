#include<malloc.h>
main(){
  int n;
  scanf("%d", &n);
  int *arr = (int *)malloc(sizeof(int) * (n+10));
  arr[0] = 1;
  arr[1] = 2;
  for(int i=2; i<=n; i++){
    arr[i] = arr[i-1] + arr[i-2];
    arr[i] = arr[i] % 15746;
  }
  printf("%d", arr[n-1]);
}
