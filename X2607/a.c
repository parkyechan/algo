#include<string.h>
main(){
  int sum = 0;
  int N;
  scanf("%d", &N);
  int alpa2[30] = {};
  for(int i=0; i<N; i++){
    int count = 0;
    char arr[1001] = {};
    int alpa[30] = {};
    scanf("%s", arr);
    int cnt = 0;
    while(1){
      if(arr[cnt++] == '\0') break;
    }
    for(int j=0; j<cnt-1; j++) arr[j] -= 65;
    for(int j=0; j<cnt-1; j++){
      alpa[arr[j]]++;
    }
    if(i == 0){
      for(int j=0; j<cnt-1; j++){
        alpa2[arr[j]]++;
      }
    }
    if(i != 0){
      for(int j=0; j<26; j++){
        printf("%d %d\n", alpa[j], alpa2[j]);
        if(alpa[j] != alpa2[j]) count++;
      }
    }
    if(count == 0 || count == 1) sum++;
  }
  printf("%d", sum-1);
}
