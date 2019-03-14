#include<stdio.h>
int main(){
  int a, b, c, res, tmp;
  int arr[10] = {};
  scanf("%d %d %d", &a, &b, &c);
  res = a * b * c;
  while(res > 0){
    tmp = res % 10;
    for(int i = 0; i<= 9; i++)
      if(i == tmp) arr[i]++;
    res = res / 10;
  }
  for(int i = 0; i<= 9; i++)
    printf("%d\n", arr[i]);
}
