#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
void BS(int n, int k){
  int s = 0, e = n -1;
  int mid;
  while(e - s >= 0){
    mid = (e + s) / 2;
    if(v[mid] > k) e = mid - 1;
    else if(v[mid] < k) s = mid + 1;
    else if(v[mid] == k){
      printf("1\n");
      return ;
    }
  }
  printf("0\n");
  return ;
}
int main(){
  int n, m;
  int tmp;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &tmp);
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  scanf("%d", &m);
  for(int i=0; i<m; i++){
    scanf("%d", &tmp);
    BS(n, tmp);
  }
}
