#include<stdio.h>
int main(){
  int a, b, len1 = 0, len2 = 0, k = 0;
  long long sum = 0;
  char *str1 = (char *)malloc(sizeof(char) * 10001);
  char *str2 = (char *)malloc(sizeof(char) * 10001);
  while(1){
    str1[len1++] = getchar();
    if(str1[len1-1] == ' ') break;
  }
  while(1){
    str2[len2++] = getchar();
    if(str2[len2-1] == '\n') break;
  }
  str1[len1-1] = '\0';
  str2[len2-1] = '\0';
  // printf("%s || %s\n", str1, str2);
  // printf("%d || %d\n", len1, len2);
  for(int i=0; i<len1-1; i++) str1[i] -= 48;
  for(int i=0; i<len2-1; i++) str2[i] -= 48;

  for(int i=0; i<len1-1; i++){
    for(int j=0; j<len2-1; j++){
      sum += (long long)(str1[i] * str2[j]);
      // printf("%d += %d * %d\n", sum, str1[i], str2[j]);
    }
  }
  printf("%llu", sum);
}
