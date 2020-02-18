#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct member{
  int x;
  char name[1001];
};
int main(){
  int N;
  scanf("%d", &N);
  member mem[1001];
  for(int i=0; i<N; i++){
    scanf("%d %s", mem.x, mem.name);
  }

}
