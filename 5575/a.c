main(){
  int a, b, c, d, e, f, res1, res2, res3;
  for(int i=0; i<3; i++){
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    res3 = f-c; res2 = e-b; res1 = d-a;
    if(res3 < 0){
      res3 = 60 + res3;
      res2--;
    }
    if(res2 < 0){
      res2 = 60 + res2;
      res1--;
    }
    printf("%d %d %d\n", res1, res2, res3);
  }
}
