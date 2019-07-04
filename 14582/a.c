#include<stdio.h>
int main(){
  int arr1[1001] = {}, arr2[1001] = {}, sum1 = 0, sum2 = 0, flag = 0, yes = 0;
  for(int i=0; i<9; i++) scanf("%d", &arr1[i]);
  for(int i=0; i<9; i++) scanf("%d", &arr2[i]);
  for(int i=0; i<9; i++){
    sum1 += arr1[i];
    if(sum1 > sum2) flag = 1;
    sum2 += arr2[i];
  }
  if(sum1 < sum2 && flag == 1) yes = 1;
  if(yes == 1) printf("Yes\n");
  else printf("No\n");
}
