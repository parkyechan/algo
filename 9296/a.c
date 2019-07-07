main(){
  int N, a, cnt = 0;
  char ans[1001] = {}, pro[1001] = {};
  scanf("%d", &N);
  for(int i=1; i<=N; i++){
    scanf("%d", &a);
    scanf("%s", pro);
    scanf("%s", ans);
    for(int j=0; j<a; j++){
      if(ans[j] == pro[j]) cnt++;
    }
    printf("Case %d: %d\n", i, a - cnt);
    cnt = 0;
  }
}
