main(){
  int a, b;
  int arr[400][400] = {};
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  int N;
  scanf("%d", &N);
  int q, w, e, r;
  for(int i=0; i<N; i++){
    int sum = 0;
    scanf("%d %d %d %d", &q, &w, &e, &r);
    q -= 1; w -= 1; e -=1 ; r -= 1;
    for(int j=q; j<=e; j++){
      for(int k=w; k<=r; k++){
        sum += arr[j][k];
      }
    }
    printf("%d\n", sum);
  }
}
