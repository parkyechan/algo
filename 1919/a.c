#include<math.h>
main(){
  char str1[1005] = {};
  char str2[1005] = {};
  int arr1[30] = {}, arr2[30] = {};
  scanf("%s", str1);
  scanf("%s", str2);
  int cnt1 = 0, cnt2 = 0;
  while(str1[cnt1++] != '\0');
  while(str2[cnt2++] != '\0');
  if(cnt1 > cnt2) cnt2 = cnt1;
  for(int i=0; i<cnt2; i++){
    if(str1[i] > 0) arr1[str1[i] - 97]++;
    if(str2[i] > 0) arr2[str2[i] - 97]++;
  }
  int sum = 0;
  for(int i=0; i<27; i++){
    if(arr1[i] != arr2[i]){
      sum += abs(arr1[i] - arr2[i]);
    }
  }
  printf("%d", sum);
}
