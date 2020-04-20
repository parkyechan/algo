#include<string.h>
main(){
  char arr[10000] = {};
  while(1){
    int sum = 2;
    scanf("%s", arr);
    if(arr[0] == '0') break;
    for(int i=0; i<strlen(arr); i++){
      if(arr[i] == '1') sum += 2;
      else if(arr[i] == '0') sum += 4;
      else sum += 3;
    }
    sum += strlen(arr) - 1;
    printf("%d\n", sum);
  }
}
