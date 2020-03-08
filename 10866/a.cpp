#include<cstdio>
#include<queue>
#include<string.h>
using namespace std;
int main(){
  int n;
  scanf("%d", &n);
  deque<int> dq;
  for(int i=0; i<n; i++){
    char arr[101] = {};
    scanf("%s", arr);
    if(!strcmp(arr, "push_back")){
      int a;
      scanf("%d", &a);
      dq.push_back(a);
    }else if(!strcmp(arr, "push_front")){
      int a;
      scanf("%d", &a);
      dq.push_front(a);
    }else if(!strcmp(arr, "pop_front")){
      if(dq.size() == 0) printf("-1\n");
      else{
        printf("%d\n", dq.front());
        dq.pop_front();
      }
    }else if(!strcmp(arr, "pop_back")){
      if(dq.size() == 0) printf("-1\n");
      else{
        printf("%d\n", dq.back());
        dq.pop_back();
      }
    }else if(!strcmp(arr, "size")){
      if(dq.size() == 0) printf("0\n");
      else printf("%d\n", dq.size());
    }else if(!strcmp(arr, "empty")){
      if(dq.empty()) printf("1\n");
      else printf("0\n");
    }else if(!strcmp(arr, "front")){
      if(dq.size() == 0) printf("-1\n");
      else printf("%d\n", dq.front());
    }else if(!strcmp(arr, "back")){
      if(dq.size() == 0) printf("-1\n");
      else printf("%d\n", dq.back());
    }
  }
}
