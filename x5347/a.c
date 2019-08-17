main(){
  int N;
  scanf("%d", &N);
  for(int as=0; as<N; as++){
    int a, b, tmp1, tmp2, cnt1 = 0, cnt2 = 0, arr1[1001] = {}, arr2[1001] = {};
    int res = 1, max = 0;
    scanf("%d %d", &a, &b);
    tmp1 = a; tmp2 = b;
    for(int i=2; i<a; i++){
      if(a % i == 0) arr1[cnt1++]++;
    }
    for(int i=2; i<b; i++){
      if(b % i == 0) arr2[cnt2++]++;
    }
    if(cnt1 > cnt2) max = cnt1;
    else max = cnt2;
    for(int i=0; i<=cnt1; i++){
      for(int j=0; j<=cnt2; j++){
        if(arr1[i] == arr2[j]) arr2[j] = 0;
      }
    }
    for(int i=0; i<=max; i++){
      if(arr1[i] > 0) res *= arr1[i];
      if(arr2[i] > 0) res *= arr2[i];
    }
    printf("%d\n", res);
  }
}
