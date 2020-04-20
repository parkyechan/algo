#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int n, m;
  int arr[1001][1001] = {};
  scanf("%d %d", &n, &m);
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i=1; i<n; i++) arr[i][0] += arr[i-1][0];
  for(int i=1; i<m; i++) arr[0][i] += arr[0][i-1];
  for(int i=1; i<n; i++){
    for(int j=1; j<m; j++){
      arr[i][j] += max(max(arr[i-1][j], arr[i][j-1]), arr[i-1][j-1]);
    }
  }
  printf("%d", arr[n-1][m-1]);
}
