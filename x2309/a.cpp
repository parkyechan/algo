#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int arr[10] = {};
  for(int i=0; i<9; i++) scanf("%d", &arr[i]);
  int min = 11110;
  int sum[10] = {};
  sum[0] = arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7];
  sum[1] = arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[8];
  sum[2] = arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[9];
  sum[3] = arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8];
  sum[4] = arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[9];
  sum[5] = arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9];
  int flag;
  for(int i=0; i<6; i++){
    if(sum > min){
      min = sum;
      flag = i;
    }
  }
  if(flag == 0){

  }else if(flag == 1){

  }else if(flag == 2){

  }else if(flag == 3){

  }else if(flag == 4){

  }else if(flag == 5){

  }
}
