#include<stdio.h>
#include<math.h>
int main(){
  int a[3] = {}, max, N, flag = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++) scanf("%d", &a[i]);

  if(N == 2){
    printf("1\n");
    if(a[0] >= a[1]) max = a[0];
    else max = a[1];
    for(int i = 2; i<max; i++){
      if(a[0] % i == 0) flag++;
      if(a[1] % i == 0) flag++;
      if(flag == 2) printf("%d\n", i);
      flag = 0;
    }
  }
  if(N == 3){
    printf("1\n");
    if(a[0] >= a[1]) max = a[0];
    if(a[1] >= a[2]) max = a[1];
    if(a[2] >= a[0]) max = a[2];
    for(int i = 2; i<max; i++){
      if(a[0] % i == 0) flag++;
      if(a[1] % i == 0) flag++;
      if(a[2] % i == 0) flag++;
      if(flag == 3) printf("%d\n", i);
      flag = 0;
    }
  }
}
