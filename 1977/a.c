#include<math.h>
main(){
  int a, b, min, max, sum = 0;
  scanf("%d %d", &a, &b);
  for(int i=1; i<=sqrt(a); i++) min = i;
  for(int i=1; i<=sqrt(b); i++) max = i;
  // printf("%d %d", min, max);
  if(min == sqrt(a)){
    for(int i=min; i<=max; i++){
      sum += i*i;
    }
    printf("%d\n%d", sum, min);
  }else{
    for(int i=min+1; i<=max; i++){
      sum += i*i;
    }
    if(sum != 0) printf("%d\n%d", sum, (min+1)*(min+1));
    else printf("-1");
  }
}
