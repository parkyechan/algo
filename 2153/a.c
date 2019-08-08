#include<math.h>
#include<stdio.h>
int main(){
  int cnt = 0, sum = 0, flag = 0;
  char arr[1001] = {};
  scanf("%s", arr);
  while(1){
    if(arr[cnt++] == '\0') break;
  }
  for(int i=0; i<cnt-1; i++){
    if(arr[i] >= 97) arr[i] -= 96;
    else {
      arr[i] -= 65;
      arr[i] += 27;
    }
  }
  for(int i=0; i<cnt-1; i++){
    sum += arr[i];
  }
  for(int i=2; i<=sqrt(sum); i++){
    if(sum % i == 0) flag = 1;
  }
  if(sum == 1){
    printf("It is a not prime word.");
    return 0;
  }
  // printf("sum : %d\n", sum);
  if(flag == 1) printf("It is a not prime word.");
  else printf("It is a prime word.");
}
