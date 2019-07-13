main(){
  char *arr = (char *)malloc(sizeof(char) * 1001);
  int N;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int g1 = 0, g2 = 0, tmp;
    scanf("%s", arr);
    g1 = (arr[0] - 65) * 26 * 26 + (arr[1] - 65) * 26 + arr[2] - 65;
    g2 = (arr[4] - 48) * 1000 + (arr[5] - 48) * 100 + (arr[6] - 48) * 10 + (arr[7] - 48);
    // printf("g1 : %d, g2 : %d", g1, g2);
    if(g2 > g1){
      tmp = g2;
      g2 = g1;
      g1 = tmp;
    }
    if((g1-g2) <= 100) printf("nice\n");
    else printf("not nice\n");
  }
}
