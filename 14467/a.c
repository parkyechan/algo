main(){
  int n;
  scanf("%d", &n);
  int cow[11][3] = {};
  int cnt = 0;
  for(int i=0; i<n; i++){
    int tmpa, tmpb;
    scanf("%d %d", &tmpa, &tmpb);
    cow[tmpa][tmpb]++;
    if(cow[tmpa][0] == 1 && cow[tmpa][1] == 1){
      cnt++;
      cow[tmpa][0] = 0;
      cow[tmpa][1] = 0;
    }
  }
  printf("%d", cnt);
}
