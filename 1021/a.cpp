#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
int main(){
  int n, m, tmp, cnt = 0;
  int arr[1001] = {};
  deque<int> dq;
  scanf("%d %d", &n, &m);
  for(int i=1; i<=n; i++) dq.push_back(i);
  for(int i=0; i<m; i++){
    int cur = 1;
    scanf("%d", &arr[i]);
    for(deque<int>::iterator iter = dq.begin(); iter<dq.end(); iter++){
      if(*iter == arr[i]){
        break;
      }
      cur++;
    }
    int left = cur - 1;
    int right = dq.size() - cur + 1;
    if(left < right){
      for(int j=1; j<=left; j++){
        int tt = dq.front();
        dq.pop_front();
        dq.push_back(tt);
        cnt++;
      }
      dq.pop_front();
    }else{
      for(int j=1; j<=right; j++){
        int tt = dq.back();
        dq.pop_back();
        dq.push_front(tt);
        cnt++;
      }
      dq.pop_front();
    }
  }
  printf("%d", cnt);
}
