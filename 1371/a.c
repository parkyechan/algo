#include<stdio.h>
int main(){
  char arr[5001] = {}, alpa[27] = {};
  int i = 0, max = 0;
  while ((arr[i] = getchar()) != EOF) {
    alpa[arr[i] - 97] ++;
  }
  for(int i=1; i<28; i++){
    if(alpa[i] > max) max = alpa[i];
  }
  printf("%c", arr[max + 97]);
}
