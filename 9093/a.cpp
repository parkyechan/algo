#include<iostream>
#include<cstdio>
#include<string.h>
#include<stack>
using namespace std;
int main(){
  int N;
  scanf("%d", &N);
  char tttt;
  tttt = getchar();
  for(int i=0; i<N; i++){
    char arr[1001] = {};
    int cnt = 0;
    stack<char> s;
    while(arr[cnt-1] != '\n'){
      arr[cnt++] = getchar();
    }
    for(int i=0; i<strlen(arr); i++){
      if(arr[i] != ' ' && arr[i] != '\n'){
        s.push(arr[i]);
      }else{
        while(!s.empty()){
          printf("%c", s.top());
          s.pop();
        }
        printf(" ");
      }
    }
    printf("\n");
  }
}
