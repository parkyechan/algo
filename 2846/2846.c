#include<stdio.h>
int main(){
  int arr[1002] = {};
  int N, max = 0, t = 1;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<N; i++){
    if(i>0 && (arr[i-1] < arr[i])){
      if(arr[i] - arr[i-t] > max)
        max = (arr[i] - arr[i-t]);
      t++;
    }else{
      t = 1;
    }
  }
  printf("%d", max);
}
