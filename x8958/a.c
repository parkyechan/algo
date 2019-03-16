#include<stdio.h>
#include<string.h>
int main(){
  int N, len, res = 0, t = 0;
  char arr[1001] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%s", arr);
    len = strlen(arr);
    for(int j=0; j<len; j++){
      if(arr[j] == 'O' && arr[j] != arr[j+1]){
        // t++;
        res +=1;
      }
      if(arr[j] == 'X' && arr[j+1] =='O'){
        // t++;
        res +=1;
      }
      if(arr[j] == arr[j+1] && arr[j] == 'O'){
        t++;
        res += t;
        printf("t, res : %d %d\n", t, res);
      }else{
        t = 0;
      }
    }
    printf("%d\n", res);
    res = 0;
  }
}
