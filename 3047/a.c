#include<stdio.h>
int main(){
    int a[3] = {}, b, c, max = 0, mid, min, i = 0, tmp;
    char arr[10] = {};
  scanf("%d %d %d", &a[0], &a[1], &a[2]);
  scanf("%s", arr);
  for(int k=0; k<3; k++){
    for(int j=0; j<2; j++){
      if(a[j] > a[j+1]){
        tmp = a[j+1];
        a[j+1] = a[j];
        a[j] = tmp;
      }
    }
  }
  while(1){
    if(arr[i] == 'A') printf("%d ", a[0]);
    if(arr[i] == 'B') printf("%d ", a[1]);
    if(arr[i] == 'C') printf("%d ", a[2]);
    i++;
    if(i>2) break;
  }

}
