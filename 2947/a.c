#include<stdio.h>
int main(){
  int arr[10] = {}, tmp, cnt = 0;
  for(int i=0; i<5; i++){
    scanf("%d", &arr[i]);
  }
  while(1){
    for(int i=0; i<5; i++){
      for(int j=i; j<4; j++){
        if(arr[j] > arr[j+1]){
          tmp = arr[j+1];
          arr[j+1] = arr[j];
          arr[j] = tmp;
          for(int k=0; k<5; k++){
            printf("%d ", arr[k]);
          }
          printf("\n");
        }
      }
    }
    for(int i=0; i<5; i++){
      if(arr[i] == i+1) cnt++;
    }
    if(cnt == 5) break;
  }
}
