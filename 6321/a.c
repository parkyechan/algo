#include<string.h>
main(){
  int n;
  scanf("%d", &n);
  char arr[1001][1001] = {};
  for(int i=0; i<n; i++){
    scanf("%s", arr[i]);
  }
  for(int i=0; i<n; i++){
    printf("String #%d\n", i+1);
    for(int j=0; j<strlen(arr[i]); j++){
      if(arr[i][j]+1 <= 90)
        printf("%c", arr[i][j]+1);
      else
        printf("A");
    }
    printf("\n\n");
  }
}
