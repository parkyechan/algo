#include<string.h>
#include<algorithm>
#include<cstdio>
#include<malloc.h>
using namespace std;
int main(){
  int n, m;
  int cnt = 0;
  scanf("%d %d", &n, &m);
  char **d = (char **)malloc(sizeof(char *) * n);
  char **b = (char **)malloc(sizeof(char *) * m);
  char **db = (char **)malloc(sizeof(char *) * (n+m));
  for(int i=0; i<n; i++) d[i] = (char *)malloc(sizeof(char) * 21);
  for(int i=0; i<m; i++) b[i] = (char *)malloc(sizeof(char) * 21);
  for(int i=0; i<m+n; i++) db[i] = (char *)malloc(sizeof(char) * 21);
  for(int i=0; i<n; i++) scanf("%s", d[i]);
  for(int i=0; i<m; i++) scanf("%s", b[i]);
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(!strcmp(d[i], b[j])){
        strcpy(db, d[i]);
        cnt++;
      }
    }
  }
  sort(db, db+cnt);
}
