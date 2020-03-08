#include<cstdio>
#include<malloc.h>
#include<vector>
#include<queue>
using namespace std;
int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  int *chk = (int *)malloc(sizeof(int) * 100001);
  // int chk[100001] = {};
  // for(int i=0; i<=b; i++) chk[i] = 0;
  queue<int> q;
  q.push(a);
  chk[a] = 1;
  int res = 0;
  int tmp;
  while(1){
    int t = q.size();
    for(int i=0; i<t; i++){
       tmp = q.front();
       if(tmp-1 == b || tmp +1 == b || tmp * 2 == b){
         printf("%d", res+1);
         return 0;
       }
       if(tmp - 1 > 0){
         if(chk[tmp-1] == 0){
           q.push(tmp-1);
           chk[tmp-1]++;
         }
       }
       if(tmp + 1 > 0){
         if(chk[tmp+1] == 0){
           q.push(tmp+1);
           chk[tmp+1]++;
         }
       }
       if(tmp * 2 > 0 && chk[tmp * 2] == 0){
         q.push(tmp * 2);
         chk[tmp * 2]++;
       }
       q.pop();
    }
    res++;
  }
  free(chk);
  // printf("%d", res);
}
