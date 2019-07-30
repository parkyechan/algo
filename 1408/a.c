main(){
  int in1, in2, in3, out1, out2, out3, flag1 = 0, flag2 = 0, res1, res2, res3;
  char d, e;
  scanf("%d%c%d%c%d", &in1, &d, &in2, &e, &in3);
  scanf("%d%c%d%c%d", &out1, &d, &out2, &e, &out3);
  res3 = out3 - in3;
  res2 = out2 - in2;
  if(out1 > in1) res1 = out1 - in1;
  else res1 = 24 - (in1 - out1);
  if(res3 < 0){
    res2--;
    res3 = -res3;
    res3 = 60 - res3;
  }
  if(res2 < 0){
    res1--;
    res2 = -res2;
    res2 = 60 - res2;
  }
  if(res1 == 24) res1 = 0;
  printf("%.2d%c%.2d%c%.2d", res1, d, res2, e, res3);

}
