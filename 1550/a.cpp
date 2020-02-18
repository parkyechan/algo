#include<cstdio>
int main(){
  char arr[1001] = {};
  scanf("%s", arr);
  int cnt = 1, sum = 0, lv = 0;
  while(arr[lv] != '\0') lv++;
  for(int i=lv-1; i>=0; i--){
    if(arr[i] >= 65) arr[i] -= 55;
    else if(arr[i] >= 48 && arr[i] <= 57) arr[i] -= 48;
    sum = sum + arr[i] * cnt;
    cnt *= 16;
  }
  printf("%d", sum);
}
