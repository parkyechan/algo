#include<cstdio>
#include<vector>
using namespace std;
int main(){
  int n, b, c;
  scanf("%d", &n);
  vector<int> a(n+1);
  for(int i=0; i<n; i++) scanf("%d", &a[i]);
  scanf("%d %d", &b, &c);
  for(int i=0; i<n; i++){
    a[i] -= b;
  }
  double cnt = 0;
  for(int i=0; i<n; i++){
    if(a[i] % c != 0){
      cnt += (double)(a[i] / c + 1);
    }else{
      cnt += (double)(a[i] / c);
    }
  }
  printf("%.lf", (double)(n+cnt));
}
