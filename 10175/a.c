#include<stdio.h>
int main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    char arr1[1001] = {}, arr2[1001] = {};
    int max = 0, i = 0, arr[1001] = {}, res, flag = 0;
    scanf("%s %s", arr1, arr2);
    while(arr2[i] != '\0'){
      if(arr2[i] == 'W'){
        arr[3] += 3;
      }else if(arr2[i] == 'M'){
        arr[4] += 4;
      }else if(arr2[i] == 'C'){
        arr[1] += 1;
      }else if(arr2[i] == 'B'){
        arr[2] += 2;
      }
      i++;
    }
    for(int k=1; k<5; k++){
      if(arr[k] > max){
        max = arr[k];
        res = k;
        flag = 0;
      }else if(arr[k] == max){
        flag = 1;
      }
    }
    if(flag == 1)
      printf("%s: There is no dominant species", arr1);
    else if(res == 1)
      printf("%s: The Coyote is the dominant species\n", arr1);
    else if(res == 2)
      printf("%s: The Bobcat is the dominant species\n", arr1);
    else if(res == 3)
      printf("%s: The Wolf is the dominant species\n", arr1);
    else if(res == 4)
      printf("%s: The Mountain Lion is the dominant species\n", arr1);
  }
}
