#include<string.h>
main(){
  int N;
  char arr[101][15] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%s", arr[i]);
  }
  char tmp[15] = {};
  for(int i=0; i<N; i++){
    for(int j=i; j<N; j++){
      int cnt = strlen(arr[j]);
      cnt -= 1;
      char tmp2[15] = {};
      int c =0;
      while(cnt != 0){
        tmp2[c++] = arr[j][cnt--];
      }
      tmp2[c] = arr[j][0];
      // printf("tmp2 > %s\n", tmp2);
      if(!strcmp(arr[i], tmp2)){
        strcpy(tmp, arr[i]);
      }
    }
  }
  printf("%d %c", strlen(tmp), tmp[strlen(tmp)/2]);
}
