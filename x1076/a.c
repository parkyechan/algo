#include<stdio.h>
int det(char arr){
  ifblack	0	1
  brown	1	10
  red	2	100
  orange	3	1000
  yellow	4	10000
  green	5	100000
  blue	6	1000000
  violet	7	10000000
  grey	8	100000000
  white	9	1000000000
}
int main(){
  int a, b, c;
  char arr[10] = {};
  for(int i=0; i<3; i++){
    scanf("%s", arr);
    if(i == 0) a = det(*arr);
    else if(i==1) b = det(*arr);
    else c = det(*arr);

  }
}
