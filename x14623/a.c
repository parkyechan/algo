#include<string.h>
#include<stdio.h>
main(){
  char a[31] = {}, b[31] = {};
  int res[1001] = {};
  scanf("%s", a);
  scanf("%s", b);
  int alen = strlen(a);
  int blen = strlen(b);
  int cnt = 0;
  if(alen > blen){
    for(int i=0; i<blen; i++){
      if(b[i] == '1'){
        for(int j=0; j<alen; j++){
          if(a[j] == '1')
            res[cnt+j] += 1;
        }
      }
      cnt++;
    }
    for(int i=0; i<alen+cnt-1; i++){
      if(res[i] > 1){
        if(res[i] % 2 == 1){
          res[i+1] += res[i] - 1;
          res[i] = 1;
        }else{
          res[i+1] += res[i];
          res[i] = 0;
        }
      }
    }
    // printf("lat len : %d %d %d\n", res[alen+cnt], res[alen+cnt+1], res[alen+cnt+2]);
    for(int i=0; i<alen+cnt-1; i++) printf("%d", res[i]);
  }else{
    for(int i=0; i<alen; i++){
      if(a[i] == '1'){
        for(int j=0; j<blen; j++){
          if(a[j] == '1')
            res[cnt+j] += 1;
        }
      }
      cnt++;
    }
    for(int i=0; i<alen+cnt-1; i++){
      if(res[i] > 1){
        if(res[i] % 2 == 1){
          res[i+1] += res[i] - 1;
          res[i] = 1;
        }else{
          res[i+1] += res[i];
          res[i] = 0;
        }
      }
    }
    for(int i=0; i<blen+cnt-1; i++) printf("%d", res[i]);
  }
  // printf("%d", cnt);
}
