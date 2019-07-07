main(){
  int N, k = 0, good = 0, bad = 0;
  char a;
  scanf("%d", &N);
  a = getchar();
  for(int i=0; i<N; i++){
    char arr[1001] = {};
    while(1){
      arr[k++] = getchar();
      if(arr[k-1] == '\n') break;
    }
    arr[k-1] = '\0';
    for(int j=0; j<k-1; j++){
      if(arr[j] == 'g') good++;
      else if(arr[j] == 'b') bad++;
      else if(arr[j] == 'G') good++;
      else if(arr[j] == 'B') bad++;
    }
    if(good > bad) printf("%s is GOOD\n", arr);
    else if(bad > good) printf("%s is A BADDY\n", arr);
    else if(bad == good) printf("%s is NEUTRAL\n", arr);
    good = 0;
    bad = 0;
    k = 0;
  }
}
