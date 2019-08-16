main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int a, b, tmp1, tmp2, cnt1 = 0, cnt2 = 0, arr1[1001] = {}, arr2[1001] = {};
    int res = 1;
    scanf("%d %d", &a, &b);
    tmp1 = a; tmp2 = b;
    for(int i=2; i<a; i++){
      if(a % i == 0) arr1[cnt1++]++;
    }
    for(int i=2; i<b; i++){
      if(b % i == 0) arr2[cnt2++]++;
    }
  }
}
