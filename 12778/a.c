main(){
  int N;
  char d;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int a;
    char b, arr[1001] = {};
    scanf("%d %c", &a, &b);
    // d = getchar();
    // printf("%d\n", a);
    if(b == 'C'){
      for(int j=0; j<a; j++){
        printf("hi");
        scanf("%c", arr[j]);
        arr[j] -= 64;
      }
      for(int j=0; j<a; j++) printf("%d", arr[j]);
    }else{

    }
  }
}
