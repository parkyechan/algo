#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int BS(vector<int> v, int key){
  int f = 0;
  int e = v.size() - 1;
  while(f <= e){
    int mid = (f + e) / 2;
    if(v[mid] == key){
      return 1;
    }else{
      if(v[mid] > key){
        e = mid - 1;
      }else(v[mid] < key){
        f = mid + 1;
      }
    }
  }
  return -1;
}
int main(){
  vector<int> v1, v2;
  int a, b, tmp;
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    scanf("%d", &tmp);
    v1.push_back(tmp);
  }
  for(int i=0; i<b; i++){
    scanf("%d", &tmp);
    v2.push_back(tmp);
  }
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());
  int cnt = 0;
  for(int i=0; i<a; i++){
    if(BS(v2, v1[i]) == -1) cnt++;
  }
  for(int i=0; i<b; i++){
    if(BS(v1, v2[i]) == -1) cnt++;
  }
  printf("%d", cnt);
}
