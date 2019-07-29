#include<stdio.h>
int main(){
  int a, b, len1 = 0, len2 = 0, tmp1, tmp2, arr1[1001] = {}, arr2[1001] = {}, k = 0, l = 0, sum = 0;
  scanf("%d %d", &a, &b);
  tmp1 = a; tmp2 = b;
  while(1){
    if(tmp1 == 0) break;
    arr1[len1++] = tmp1 % 10;
    tmp1 /= 10;
  }
  while(1){
    if(tmp2 == 0) break;
    arr2[len2++] = tmp2 % 10;
    tmp2 /= 10;
  }
  for(int i=0; i<len1; i++){
    for(int j=0; j<len2; j++){
      sum += arr1[i] * arr2[j];
        printf("%d += %d * %d\n", sum, arr1[i], arr2[j]);
    }
  }
  printf("%d" ,sum);
}
