#include<stdio.h>
int main(){
  int a[1001] = {}, b[1001] = {}, tmp, a_sum = 0, b_sum = 0;
  for(int i=0; i<10; i++)
    scanf("%d", &a[i]);
  for(int i=0; i<10; i++)
    scanf("%d", &b[i]);
  for(int i=0; i<10; i++){
    for(int j=0; j<9; j++){
      if(a[j] > a[j+1]){
        tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
  }
  for(int i=0; i<10; i++){
    for(int j=0; j<9; j++){
      if(b[j] > b[j+1]){
        tmp = b[j];
        b[j] = b[j+1];
        b[j+1] = tmp;
      }
    }
  }
  for(int i=9; i>6; i--){
    a_sum += a[i];
    b_sum += b[i];
  }
  printf("%d %d", a_sum, b_sum);
}
