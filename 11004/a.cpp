#include<cstdio>
#include<malloc.h>
#include<algorithm>
using namespace std;
int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  int *arr = (int *)malloc(sizeof(int) * a + 1);
  for(int i=0; i<a; i++) scanf("%d", &arr[i]);
  sort(arr, arr+a);
  printf("%d", arr[b-1]);
}
