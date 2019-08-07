main(){
  int a, b, c, sum = 0;
  scanf("%d", &a);
  for(int i=0; i<a; i++){
    scanf("%d %d", &b, &c);
    for(int j=0; j<c; j++){
      for(int k=0; k<j; k++) sum += c/2;
    }
  }
}
