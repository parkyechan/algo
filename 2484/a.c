#include<stdio.h>
int main(){
  int N, max_res = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int arr[10] = {}, box[1001] = {}, flag, max = 0, res = 0, cnt1 = 0, cnt2 = 0, cnt = 0;
    for(int j=0; j<4; j++){
      scanf("%d", &box[j]);
      arr[box[j]]++;
    }
    for(int j=0; j<7; j++){
      if(arr[j] > max){
        max = arr[j];
        flag = j;
      }
    }
    if(max == 1){
      for(int j=0; j<=6; j++){
        if(arr[j] == 1)
          flag = j;
      }
      res = flag * 100;
    }else if(max == 2){
      for(int j=0; j<=6; j++){
        if(arr[j] == 2) {
          if(cnt1 == 0) cnt1 = j;
          else cnt2 = j;
          cnt++;
        }
      }
      if(cnt == 2) res = 2000 + cnt1 * 500 + cnt2 * 500;
      else res = 1000 + flag * 100;
    }else if(max == 3){
      res = 10000 + flag * 1000;
    }else if(max == 4){
      res = 50000 + flag * 5000;
    }
    if(max_res < res) max_res = res;
  }
  printf("%d", max_res);
}
