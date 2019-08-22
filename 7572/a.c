main(){
  int N;
  scanf("%d", &N);
  if(N == 1) printf("J7");
  else if(N == 2)printf("K8");
  else if(N == 3)printf("L9");
  else if(N >= 4)printf("%c%d", (N-4)%12+65, (N-4)%10);
  // printf("%c", 4);
}
