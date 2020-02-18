main(){
  char arr[101][101] = {};
  int a, b;
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    scanf("%s", arr[i]);
  }
  for(int i=0; i<a; i++){
    for(int j=b-1; j>=0; j--){
      printf("%c", arr[i][j]);
    }
    printf("\n");
  }
}
