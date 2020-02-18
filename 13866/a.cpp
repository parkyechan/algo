#include<algorithm>
#include<cstdio>
using namespace std;
main(){
  int arr[5] = {};
  for(int i=0; i<4; i++) scanf("%d", &arr[i]);
  sort(arr, arr+3);
  int s1 = arr[0] + arr[3];
  int s2 = arr[1] + arr[2];
  int a = min(s1, s2);
  int b = max(s1, s2);
  printf("%d", b-a);
}
