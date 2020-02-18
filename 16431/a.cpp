#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  int bn, bc, dn, dc, jn, jc;
  scanf("%d %d", &bn, &bc);
  scanf("%d %d", &dn, &dc);
  scanf("%d %d", &jn, &jc);
  int dis_bx = abs(bn-jn);
  int dis_by = abs(bc-jc);
  int dis_dx = abs(dn-jn);
  int dis_dy = abs(dc-jc);
  printf("%d %d\n", dis_dx, dis_dy);
  int dis_b_sum = dis_bx+dis_by;
  int min1 = min(dis_dx, dis_dy);
  int max1 = max(dis_dx, dis_dy);
  int res_dis = max1 - min1;
  if(dis_bx+dis_by > min1+res_dis) printf("bessie");
  else if(dis_bx+dis_by < min1+res_dis) printf("daisy");
  else printf("tie");
}
