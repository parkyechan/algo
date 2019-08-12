#include<math.h>
main(){
  int a, b, cnt = 0, tmp;
  int *arr = (int *)malloc(sizeof(int) * 10000);
  for(int i=0; i<10000; i++) arr[i] = 0;
  scanf("%d %d", &a, &b);
  for(int i=1; i<=a; i++){
    if(a % i == 0) arr[cnt++] = i;
  }
  // for(int i=0; i<cnt; i++) printf("%d ", arr[i]);
  for(int i=0; i<cnt; i++){
    for(int j=0; j<cnt-1; j++){
      if(arr[j] > arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
  printf("%d", arr[b-1]);
}
