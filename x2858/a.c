#include<stdio.h>
#include<math.h>
int main(){
  int a, b, tmp;
  scanf("%d %d", &a, &b);
  for(int i=1; i<=a; i++){
    if((a+b) % i != 0) continue;
    for(int j=a; j>=1; j--){
      if((a+b) == i * j){
        if((i-2) * (j-2) == b){
          if(i < j)
            printf("%d %d\n", i, j);
          else if(i >= j)
            printf("%d %d\n", i, j);
        }
      }
    }
  }
}
