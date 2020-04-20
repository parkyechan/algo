#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
bool sortbyfirst(pair<int,int> &a, pair<int,int> &b) {
    return (a.first < b.first);
}
bool sortbysecond(pair<int,int> &a, pair<int,int> &b) {
    return (a.second < b.second);
}
int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    int a;
    scanf("%d", &a);
    vector<pair<int, int>> v;
    vector<pair<int, int>> v_copy;
    for(int j=0; j<a; j++){
      int tmpa, tmpb;
      scanf("%d %d", &tmpa, &tmpb);
      v.push_back(make_pair(tmpa, tmpb));
    }
    v_copy.resize((int)(v.size()));
    std::copy(v.begin(), v.end(), v_copy.begin());
    sort(v.begin(), v.end(), sortbyfirst);
    sort(v_copy.begin(), v_copy.end(), sortbysecond);
    int cnt1 = 1, cnt2 = 1;
    int min1 = v[0].second, min2 = v_copy[0].first;
    if(v[0].first == 1 && v[0].first == v[0].second){
      printf("1");
      continue;
    }
    for(int i=1; i<a; i++){
      if(v[i].second < min1) cnt1++;
      else break;
    }
    for(int i=1; i<a; i++){
      if(v_copy[i].first < min2) cnt2++;
      else break;
    }
    if(cnt1 + cnt2 >= a) printf("%d\n", cnt1);
    else printf("%d\n", cnt1+cnt2);
    // printf("cnt >> %d %d\n", cnt1, cnt2);
  }
}
