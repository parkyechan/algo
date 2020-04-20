#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    int a[2][100001] = {};
    int dp[2][100001] = {};
    int k;
    scanf("%d", &k);
    for(int j=0; j<k; j++){
      scanf("%d", &a[0][j]);
    }
    for(int j=0; j<k; j++){
      scanf("%d", &a[1][j]);
    }
    dp[0][0] = a[0][0];
    dp[1][0] = a[1][0];
    dp[0][1] = a[0][1] + dp[1][0];
    dp[1][1] = a[1][1] + dp[0][0];
    for(int j=2; j<k; j++){
      dp[0][j] = max(dp[1][j-2], dp[1][j-1]) + a[0][j];
      dp[1][j] = max(dp[0][j-2], dp[0][j-1]) + a[1][j];
    }
    printf("%d\n", max(dp[0][k-1], dp[1][k-1]));
  }
}
