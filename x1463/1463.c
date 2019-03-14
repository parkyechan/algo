#include<stdio.h>
int remaintwo(int n);
int remainone(int n);
int remainzero(int n);

int main(){
  int N, cnt = 0;
  scanf("%d", &N);
  while(N != 1){
    if(N <= 2){
      printf("%d", cnt + 1);
      return 0;
    }
    cnt++;
    if((N%3) == 0)
      N = remainzero(N);
    else if((N%3) == 1)
      N = remainone(N);
    else if((N%3) == 2)
      N = remaintwo(N);
  }
  printf("%d", cnt);
}

int remaintwo(int n){
  n = n - 2;
  return n;
}

int remainone(int n){
  n = n - 1;
  return n;
}

int remainzero(int n){
  n = n / 3;
  return n;
}
