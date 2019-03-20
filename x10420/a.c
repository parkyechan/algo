#include<stdio.h>
int yoon(int a){
  if(a % 400 == 0) return 1;
  else if(a%100 == 0 && a%4==0) return 0;
  else if(a%100 != 0 && a%4==0) return 1;
  else return 0;
}
//
// 668 부터 안됨
//
int day(int a){
  if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a == 12)
    return 31;
  else if(a == 4 || a == 6 || a == 9 || a == 11 )
    return 30;
  else if(a == 2 && yoon(a) == 1)
    return 29;
  else {
    return 28;
  }
}
int main(){
  int N, y = 2014, m = 4, d = 2;
  scanf("%d", &N);
  // N = N -2;
  while(N>27){
    if(N > day(m)){
      N -= day(m);
      m++;
    }
    if(m>12){
      m = 1;
      y++;
    }
  }

  N += d-1;
   printf("%d-%d-%d", y, m, N);
}
