#include<stdio.h>
int main(){
  int N, cnt = 0, flag = 0;
  scanf("%d", &N);
  while(1){
    int arr[1001] = {}, len = 0, tmp, tmp2;
    tmp = N;
    tmp2 = N;
    while(1){
      if(tmp == 0) break;
      tmp = tmp / 10;
      len++;
    }
    for(int i = 0; i<len; i++){
      arr[i] = tmp2 % 10;
      tmp2 /= 10;
    }
    if(N == 1000){
      printf("144");
      return 0;
    }
    if(len == 3){
      if(arr[0] - arr[1] == arr[1] - arr[2]) cnt++;
      flag++;
    }else if(flag == 0){
      printf("%d", N);
      return 0;
    }else if(flag != 0 && len < 3){
      printf("%d", cnt + 99);
      return 0;
    }
    N--;
  }
}
