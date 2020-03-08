#include<cstdio>
#include<stack>
using namespace std;
int main(){
  for(int i=0; i<3; i++){
    int m;
    stack<int> sp;
    stack<int> sm;
    scanf("%d", &m);
    for(int j=0; j<m; j++){
      long long a;
      scanf("%lld", &a);
      if(a > 0) sp.push(a);
      else if(a < 0) sm.push(a);
    }
    if(sp.size() > 0 && sm.size() == 0) printf("+\n");
    else if(sp.size() < 0 && sm.size() > 0) printf("-\n");
    else if(sp.size() == 0 && sm.size() == 0) printf("0\n");
    else if(sp.size() > 0 && sm.size() > 0){
      while(sp.size() != 0 && sm.size() != 0){
        long long tmp = 0;
        tmp += sp.top();
        tmp += sm.top();
        sp.pop(); sm.pop();
        if(tmp > 0) sp.push(tmp);
        else if(tmp < 0) sm.push(tmp);
      }
      if(sp.size() > 0) printf("+\n");
      else if(sm.size() > 0) printf("-\n");
      else printf("0\n");
    }
  }
}
