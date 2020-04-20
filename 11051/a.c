main(){
  int a, b;
  int dp[1001][1001] = {};
  scanf("%d %d", &a, &b);
  for(int i=1; i<=a; i++){
    for(int j=0; j<=a; j++){
      if(i == j || j == 0){
        dp[i][j] = 1;
      }else{
        dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % 10007;
      }
    }
  }
  printf("%d", dp[a][b]);
}
