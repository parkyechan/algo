#include<cstdio>
int main(){
  int n;
  scanf("%d", &n);
  int s = 2;
  for(int i=0; i<n; i++){
    s = s * 2 - 1;
  }
  printf("%d", s * s);
}
