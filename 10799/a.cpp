#include<cstdio>
#include<stack>
using namespace std;
int main(){
  stack<char> s;
  char arr[100000] = {};
  scanf("%s", arr);
  int cnt = 0;
  for(int i=0; i<10000; i++){
    if(arr[i] == '\0') break;
    cnt++;
  }
  for(int i=0; i<cnt; i++){
    s.push(arr[i]);
    
  }
}
