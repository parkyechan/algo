#include<stdio.h>
int self(int a){
  int t = 1, sum = 0;
  while(t != 0){
    sum += t;
    t = a % 10;
    a = a / 10;
  }
  return sum - 1;
}
int main(){
  int N, res;
  scanf("%d", &N);
  res = self(N);
  printf("%s\n", );
}
