#include<stdio.h>
#include<string.h>
int main(){
  int len, cnt = 0;
  char arr[1001]= {};
  char cam[1001] = {'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E'};
  scanf("%s", arr);
  len = strlen(arr);
    for(int i=0; i<len; i++){
      for(int j=0; j<9; j++){
        // printf("arr[%d] cam[%d], %c %c\n", i, j, arr[i], cam[j]);
        if(arr[i] == cam[j]){
          // printf("%d %d %c\n", i, j, arr[i]);
          // for(int k=i; k<len; k++)
            arr[i] = ' ';
        }
      }
    }
  for(int i=0; i<len; i++){
    if(arr[i] !=' ') printf("%c", arr[i]);
  }
}
