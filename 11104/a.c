#include<stdio.h>
int main(){
  int N;
  unsigned long long cnt = 1, res = 0;
  char arr[25] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%s", arr);
    for(int j=23; j>=0; j--){
      if(arr[j] == '1') res += cnt;
      cnt*=2;
    }
    printf("%llu\n", res);
    cnt = 1;
    res = 0;
  }
}
