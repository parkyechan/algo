#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
  int n;
  int arr[501][501] = {};
  int dp[501][501] = {};
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  dp[0][0] = arr[0][0];
  for(int i=1; i<n; i++){
    dp[i][0] = dp[i-1][0] + arr[i][0];
    dp[i][i] = dp[i-1][i-1] + arr[i][i];
    for(int j=1; j<i; j++){
      dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + arr[i][j];
    }
  }
  int mmax = 0;
  for(int i=0; i<n; i++){
    if(dp[n-1][i] > mmax) mmax = dp[n-1][i];
  }
  printf("%d", mmax);
}
