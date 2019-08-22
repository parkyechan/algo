main(){
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int num;
    scanf("%d", &num);
    double h, g, sum = 0, hak = 0;
    for(int j=0; j<num; j++){
      scanf("%lf %lf", &h, &g);
      sum += h * g;
      hak += h;
    }
    printf("%d %.1lf\n", (int)hak, sum / hak);
  }
}
