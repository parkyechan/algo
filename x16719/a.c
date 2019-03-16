#include<stdio.h>
#include<string.h>

int front(int a){

}

int main(){
  char arr[1001] = {};
  int len, cnt = 0, retlen;
  scanf("%s", arr);
  len = strlen(arr);
  for(int i=65; i<91; i++){
    for(int j=0; j<len; j++){
      if(arr[j] == i && cnt==0){
        printf("%c\n", arr[j]);
        retlen = j;
        cnt++;
      }
    }
  }
  printf("%d", retlen);
  for(int i=0; i<len; i++){
    for(int j=retlen; j<=i; j++){
      printf("%c", arr[j]);
    }
    printf("\n");
  }
}
