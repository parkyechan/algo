#include<cstdio>
#include<algorithm>
#include<malloc.h>
using namespace std;
int main(){
  int n;
  scanf("%d", &n);
  int *arr = (int *)malloc(sizeof(int) * n);
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
  int *c = (int *)malloc(sizeof(int) * n);
  int *d = (int *)malloc(sizeof(int) * n);
  int cnt = 0;
  d[0] = arr[0];
  int res = -1000;
  for(int i=1; i<n; i++){
    d[i] = max(arr[i] + d[i-1], arr[i]);
    res = max(res, d[i]);
  }
  res = max(res, d[0]);
  printf("%d", res);
}
