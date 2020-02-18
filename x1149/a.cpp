#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int N;
  scanf("%d", &N);
  int rgb[3] = {}, res;
  int arr[1001] = {};
  for(int i=0; i<N; i++){
    for(int j=0; j<3; j++){
      scanf("%d", &rgb[j]);
    }
    sort(rgb, rgb+2);
    arr[i] = rgb[0] * 2 + rgb[1];
  }
  sort(arr, arr+N-1);
  printf("%d", arr[0]);
}
