#include<cstdio>
#include<queue>
#include<stack>
using namespace std;
int main(){
  stack<char> s;
  queue<char> q;
  int cnt = 0;
  char arr[100001] = {};
  while(arr[cnt-1] != '\n'){
    arr[cnt] = getchar();
    cnt++;
  }
  int flag = 0;
  int i = 0;
  for(int i=0; i<cnt; i++){
    if(arr[i] == '<' && s.size() == 0){
      flag = 1;
    }
    if(flag == 1){
      q.push(arr[i]);
      if(arr[i] == '>') flag = 0;
    }else{
      if(arr[i] == ' ' || arr[i] == '<'){
        while(!s.empty()){
          q.push(s.top());
          s.pop();
        }
        if(arr[i] != '<') q.push(' ');
        else i--;
      }else{
        s.push(arr[i]);
      }
    }
  }
  if(s.size() != 0){
    s.pop();
    while(!s.empty()){
      q.push(s.top());
      s.pop();
    }
  }
  while(!q.empty()){
    printf("%c", q.front());
    q.pop();
  }
}
