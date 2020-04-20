#include<cstdio>
#include<vector>
using namespace std;

int main(){
  int n, tmp;
  scanf("%d", &n);
  vector<int> v(n), t(n), res(n);
  for(int i=0; i<n; i++){
    scanf("%d", &v[i]);
  }
  for(int i=0; i<v.size(); i++){
    int q = v[i];
    while(q != 0){
      t[i] *= 10;
      t[i] += (q % 10);
      q /= 10;
    }
    res[i] = v[i] + t[i];
  }
  for(int i=0; i<n; i++){
    int q = res[i];
    vector<int> arr;
    while(q != 0){
      arr.push_back(q%10);
      q /= 10;
    }
    int flag = 1;
    for(int j=0; j<arr.size()/2; j++){
      if(arr[j] != arr[arr.size()-1-j]){
        flag = 0;
      }
    }
    if(flag){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }

}
