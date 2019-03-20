#include<stdio.h>
#include<string.h>
int main(){
  int N, len, sum = 0, cnt = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    char arr[1002] = {};
    int alph[30] = {};
    scanf("%s", arr);
    len = strlen(arr);
    for(int j=0; j<len; j++){
      for(int k=0; k<26; k++)
        for(int l=65; l<91; l++)
          if(arr[j] == l && (k+65) == l) alph[k]++;
    }
    for(int j=0; j<26; j++){
      if(alph[j] == 0) sum += (65+j);
    }
    printf("%d\n", sum);
    sum = 0;
  }
}
