main(){
  int N, cnt_A = 0, cnt_B = 0;
  char arr[1001] = {};
  scanf("%d", &N);
  scanf("%s", arr);
  for(int i=0; i<N; i++){
    if(arr[i] == 'A') cnt_A++;
    else if(arr[i] == 'B') cnt_B++;
  }
  if(cnt_A>cnt_B) printf("A");
  else if(cnt_A == cnt_B) printf("Tie");
  else if(cnt_A <cnt_B) printf("B");
}
