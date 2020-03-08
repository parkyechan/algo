#include<cstdio>
#include<vector>
using namespace std;

struct Loc{
  char arr[1001];
  Loc(char *rr);
  bool operator < (const Loc &b) const{
    return arr < b.arr;
  }
};
int main(){
  vector<Loc> arr;
  char as[1001] = {};
  scanf("%s", as);
  arr.push_back(Loc(as));
  printf("%d", arr.size());
}
