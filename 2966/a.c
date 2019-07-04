main(){
  int N, ad = 0, br = 0, go = 0;
  char arr[1001] = {};
  char sang[4] = {'A', 'B', 'C'}, chang[5] = {'B', 'A', 'B', 'C'}, hyun[7] = {'C','C','A','A','B','B'};

  scanf("%d", &N);
  scanf("%s", arr);
  for(int i=0; i<N; i++){
    if(arr[i] == sang[i%3]) ad++;
    if(arr[i] == chang[i%4]) br++;
    if(arr[i] == hyun[i%6]) go++;
  }
  if(br>ad && br>go) printf("%d\nBruno", br);
  if(ad>br && ad>go) printf("%d\nAdrian", ad);
  if(go>ad && go>br) printf("%d\nGoran", go);
  if(br == ad && br>go) printf("%d\nAdrian\nBruno", ad);
  if(br == go && br>ad) printf("%d\nBruno\nGoran", br);
  if(go == ad && ad>br) printf("%d\nAdrian\nGoran", ad);
  if(go == ad && ad == br) printf("%d\nAdrian\nBruno\nGoran", ad);

}
