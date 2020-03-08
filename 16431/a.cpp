#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
  int bn, bc, dn, dc, jn, jc;
  scanf("%d %d", &bn, &bc);
  scanf("%d %d", &dn, &dc);
  scanf("%d %d", &jn, &jc);
  int dis_b, dis_d;
  dis_d = abs(jn - dn) + abs(jc - dc);
  dis_b = max(abs(bn-jn), abs(bc-jc));
  if(dis_d > dis_b) printf("bessie");
  else if(dis_d < dis_b) printf("daisy");
  else printf("tie");
}
