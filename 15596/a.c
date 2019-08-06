#include <stdio.h>
long long sum(int *a, int n){
  long long sum = 0;
  for(int i=0; i<n; i++){
    sum += (long long)a[i];
  }
  return sum;
}

int main(){
  int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  long long res;
  res = sum(a, 10);
  printf("%llu", res);
}
