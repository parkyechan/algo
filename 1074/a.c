main(){
  int n, r, c;
  scanf("%d %d %d", &n, &r, &c);
  int fb = r / 2 * n * 4 + 4 * (c/2 + 1) - 4;
  if(r%2 == 0 && c%2 == 0) printf("%d", fb);
  else if(r%2 == 0 && c%2 == 1) printf("%d", fb+1);
  else if(r%2 == 1 && c%2 == 0) printf("%d", fb+2);
  else printf("%d", fb+3);
}
