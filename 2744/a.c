#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
  char arr[102] = {};
  int a;
  scanf("%s", arr);
  a = strlen(arr);

  for(int i=0; i<a; i++){
    if(arr[i] > 90)
      printf("%c", toupper(arr[i]));
    else
      printf("%c", tolower(arr[i]));
  }
}
