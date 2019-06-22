#include<stdio.h>
int main(){
  int N, res = 0, ins[1001] = {}, flag = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &ins[i]);
    if(ins[i] == 1 && flag == 0){
      res += 1;
      flag = 1;
    }
    if(flag > 0 && ins[i-1] == ins[i] && ins[i] == 1){
      flag++;
      res+=flag;
    }
    if(ins[i] == 0) flag = 0;
  }
  printf("%d", res);
}
