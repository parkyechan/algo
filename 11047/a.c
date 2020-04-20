#include<stdio.h>
int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  int arr[1001] = {}, chk = a - 1;
  for(int i=0; i<a; i++){
    scanf("%d", &arr[i]);
  }
  int cnt = 0;
  while(b){
    if(b >= arr[chk]){
      b -= arr[chk];
      cnt++;
    }
    if(b < arr[chk]){
      chk -= 1;
    }
  }
  printf("%d", cnt);

}
