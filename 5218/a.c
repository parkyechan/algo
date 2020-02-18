#include<stdlib.h>
main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    char arr1[101] = {}, arr2[101] = {};
    scanf("%s %s", arr1, arr2);
    printf("Distances: ");
    for(int j=0; j<strlen(arr1); j++){
      if(arr2[j] >= arr1[j]) printf("%d ", arr2[j] - arr1[j]);
      else printf("%d ", 26 + arr2[j] - arr1[j]);
    }
    printf("\n");
  }
}
