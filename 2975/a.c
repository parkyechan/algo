#include<stdio.h>
int main(){
  int a, b, res;
  char arr[100] = {};
  while(1){
    scanf("%d %c %d", &a, &arr, &b);
    if(a==0 && b ==0 && arr[0] == 'W') break;
    if(arr[0] == 'D') res = a + b;
    else if(arr[0] =='W') res = a - b;
    if(res < -200) printf("Not allowed\n");
    else printf("%d\n", res);
  }
}
