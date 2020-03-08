#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;
bool cmp(pair<int, string> a, pair<int, string> b){
  if(a.first < b.first){
    return true;
  }else{
    return false;
  }
}
int main(){
  int N;
  scanf("%d", &N);
  vector<pair<int, string> > info(N);
  for(int i=0; i<N; i++){
    cin>>info[i].first>>info[i].second;
  }
  stable_sort(info.begin(), info.end(), cmp);
  for(int i=0; i<N; i++){
    cout<<info[i].first<<" "<<info[i].second<<"\n";
  }
}
