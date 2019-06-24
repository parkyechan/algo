#include<stdio.h>
int main(){
  int a, b, arr[1001] = {}, sum = 0;
  scanf("%d %d", &a, &b);
  for(int i=0; i<b; i++){
    scanf("%d", &arr[i]);
    if(arr[i]%2 == 1)
      sum += arr[i]/2+1;
    else
      sum += arr[i]/2;
  }
  if(sum >=a) printf("YES");
  else printf("NO");
}
