main(){
  char arr[1001] = {}, tmp;
  int N, a, k = 0, st = 0;
  scanf("%d", &N);
  for(int i=0; i<N;i++){
    scanf("%d", &a);
    tmp = getchar();
    for(int j=0; j<a; j++){
      while(1){
        arr[k] = getchar();
        if(arr[k] == '\n') break;
        k++;
      }
      arr[k] = '\0';
      k = 0;
      if(arr[0] == 'P' && arr[2] == 'R') st++;
      else if(arr[0] == 'P' && arr[2] == 'S') st--;
      else if(arr[0] == 'R' && arr[2] == 'P') st--;
      else if(arr[0] == 'R' && arr[2] == 'S') st++;
      else if(arr[0] == 'S' && arr[2] == 'R') st--;
      else if(arr[0] == 'S' && arr[2] == 'P') st++;
    }
    if(st>0) printf("Player 1\n");
    else if(st<0) printf("Player 2\n");
    else if(st == 0) printf("TIE\n");
    st = 0;
  }
}
