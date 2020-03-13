#include<cstdio>
#include<vector>
using namespace std;
int main(){
  int arr[1001] = {};
  int N;
  scanf("%d", &N);
  arr[0] = 1;
  arr[2] = 3;
  for(int i=4; i<=N; i+=2){
    for(int j=2; j<=i; j+=2){
      int tmp = (j == 2) ? 3 : 2;
      arr[i] += tmp * arr[i-j];
    }
  }
  printf("%d", arr[N]);
}
