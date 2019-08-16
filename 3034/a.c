main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  for(int i=0; i<a; i++){
    int tmp;
    scanf("%d", &tmp);
    if(tmp * tmp > b * b + c * c) printf("NE\n");
    else printf("DA\n");
  }
}
