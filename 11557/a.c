#include<stdlib.h>
main(){
  int N, M;
  char s;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &M);
    s = getchar();
    char ko[1001] = {};
    int  max = 0;
    for(int j=0; j<M; j++){
      char arr[1001] = {}, res[1001] = {};
      int cnt = 0, flag, t = 0, hh;
      while(1){
        arr[cnt++] = getchar();
        if(arr[cnt-1] == '\n') break;
      }
      for(int k=0; k<cnt; k++) if(arr[k] == ' ') flag = k + 1;
      for(int k=flag; k<cnt; k++){
        res[t++] = arr[k];
      }
      hh = atoi(res);
      if(hh > max ){
        max = hh;
        strcpy(ko, arr);
      }
    }
    for(int i=0; i<10000; i++){
      if(ko[i] == ' ') break;
      printf("%c", ko[i]);
    }
    printf("\n");
  }
}
