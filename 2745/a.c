#include<stdio.h>
int main(){
  char arr[1001] = {};
  int cnt = 0, tmp = 0, sum = 0, o;
  scanf("%s %d", arr, &o);
  while(1){
    if(arr[tmp++] == '\0') break;
  }
  for(int i=0; i<tmp-1; i++){
    if(arr[i] >= 65) arr[i] -=55;
    else if(arr[i] >= 48 && arr[i] <= 57) arr[i] -=48;
  }
  int ss = 1;
  for(int i = tmp-2; i>=0; i--){
    sum += arr[i] * ss;
    ss *= o;
    // printf("%d %d %d\n", sum, arr[i], ss);
  }
  // printf("tmp : %d\n", tmp);
  // for(int i=tmp-2; i>0; i--){
  //   printf("%d\n", arr[i]);
  // }
  printf("%d", sum);
}
