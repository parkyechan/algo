#include<stdio.h>
int main(){
  int arr[1001] = {};
  int n, start_idx = 1001, end_idx = 0, max_idx = 0, max_val = 0;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    int x, y;
    scanf("%d %d", &x, &y);
    arr[x] = y;
    if(x < start_idx) start_idx = x;
    if(x > end_idx) end_idx = x;
    if(y > max_val){
      max_val = y;
      max_idx = x;
    }
  }
  // printf("%d %d %d\n", start_idx, end_idx, max_idx);
  int hmax = 0, sum = 0;
  for(int i=start_idx; i<=max_idx; i++){
    if(hmax < arr[i]){
      hmax = arr[i];
    }
    sum += hmax;
  }
  hmax = 0;
  for(int i=end_idx; i > max_idx; i--){
    if(hmax < arr[i]){
      hmax = arr[i];
    }
    sum += hmax;
  }
  printf("%d", sum);
}
