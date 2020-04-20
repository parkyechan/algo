#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int n, arr[10003] = {}, dp[10003] = {};
  scanf("%d", &n);
  for(int i=3; i<n+3; i++){
    scanf("%d", &arr[i]);
  }
  int ans = 0;
  for(int i=3; i<n+3; i++){
    dp[i] = max(dp[i-3] + arr[i-1] + arr[i], dp[i-2] + arr[i]);
    dp[i] = max(dp[i-1], dp[i]);
    ans = max(ans, dp[i]);
  }
  printf("%d", ans);
}
