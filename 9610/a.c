main(){
  int N, a, b, q1 = 0, q2 = 0, q3 = 0, q4 = 0, ax = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d %d", &a, &b);
    if(a > 0 && b > 0) q1++;
    if(a < 0 && b > 0) q2++;
    if(a < 0 && b < 0) q3++;
    if(a > 0 && b < 0) q4++;
    if(a == 0 || b == 0) ax++;
  }
  printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d", q1, q2, q3, q4, ax);
}
