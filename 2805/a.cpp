#include<vector>
#include<functional>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int a, b;
  vector<int> v;
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    int tmp;
    scanf("%d", &tmp);
    v.push_back(tmp);
  }
  sort(v.begin(), v.end(), greater<int>());
  while(b > 0){
    int cnt = 0;
    for(int i=1; i<v.size(); i++){
      if(v[0] != v[i]) break;
      else cnt++;
    }
    b = b -((v[0] - v[cnt + 1]) * (cnt + 1));
    for(int i=0; i<cnt+1; i++){
      v[i] -= (v[0] - v[cnt + 1]);
    }
  }
  printf("%d", v[0]);
}
