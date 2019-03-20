#include<stdio.h>
int main(){
  char arr[15] = {0, 0, 0, 0, 0};
  int save[5] = {0, 0, 0, 0, 0};
  int cnt = 0;
  for(int i=0; i<5; i++){
    scanf("%s", arr);
    for(int j=2; j<10; j++){
      if(arr[j-2] == 'F' && arr[j-1] =='B' && arr[j] =='I') save[i] = i+1;
    }
  }
  for(int i=0; i<5; i++){

    if(save[i] != 0){
      printf("%d ", save[i]);
    }else{
      cnt++;
    }

  }
  if(cnt == 5){
    printf("HE GOT AWAY!");
    return 0;
  }
}
