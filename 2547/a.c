main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    char a;
    a = getchar();
    int m;
    scanf("%d", &m);
    long long sum = 0;
    for(int j=0; j<m; j++){
      long long tmp;
      scanf("%lld", &tmp);
      sum += tmp % m;
    }
    if(sum % m == 0) printf("YES\n");
    else printf("NO\n");
  }
}
