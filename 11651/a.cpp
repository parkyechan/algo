#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
  if(a.second < b.second) return true;
  else if(a.second == b.second && a.first < b.first) return true;
  return false;
}
int main(){
  int N;
  scanf("%d", &N);
  vector<pair<int, int>> v(N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &v[i].first, &v[i].second);
  }
  stable_sort(v.begin(), v.end(), cmp);
  for(int i=0; i<N; i++){
    printf("%d %d\n", v[i].first, v[i].second);
  }
}
