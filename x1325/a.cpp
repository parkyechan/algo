#include<cstdio>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v[10000];
int chk[1000001] = {};
int max1 = 0;
int a, b;
vector<int> res;
void DFS(int L, int sum){
  if(sum == max1 && chk[L] == 0){
    chk[L] = 1;
    res.push_back(L);
  }else if(sum > max1){
    res.resize(0);
    memset(chk, 0, sizeof(chk));
    res.push_back(L);
    chk[L] = 1;
    max1 = sum;
  }
  for(int i=0; i<v[L].size(); i++){
    DFS(v[L][i], sum + 1);
  }
}
int main(){
  scanf("%d %d", &a, &b);
  int tmpa, tmpb;
  for(int i=1; i<=b; i++){
    scanf("%d %d", &tmpa, &tmpb);
    v[tmpa].push_back(tmpb);
  }
  for(int i=1; i<=a; i++){
    DFS(i, 1);
  }
  sort(res.begin(), res.end());
  for(int i=0; i<res.size(); i++) printf("%d ", res[i]);
}
