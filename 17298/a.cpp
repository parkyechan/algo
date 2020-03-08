#include<cstdio>
#include<stack>
#include<vector>
using namespace std;
int main(){
  int N;
  scanf("%d", &N);
  vector<int> arr(N, 0);
  vector<int> ans(N, -1);
  stack<int> s;
  for(int i=0; i<N; i++){
    int a;
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<N; i++){
    while(!s.empty() && arr[s.top()] < arr[i]){
      ans[s.top()] = arr[i];
      s.pop();
    }
    s.push(i);
  }
  for(int i=0; i<N; i++) printf("%d ", ans[i]);
}
