main(){
  int N, arr[1001] = {}, tmp;
  scanf("%d", &N);
  for(int cnt=0; cnt<N; cnt++){
    for(int i=0; i<5; i++){
      scanf("%d", &arr[i]);
    }
    for(int j=0; j<5; j++){
      for(int k=0; k<4; k++){
        if(arr[k]>arr[k+1]){
          tmp = arr[k+1];
          arr[k+1] = arr[k];
          arr[k] = tmp;
        }
      }
    }
    if(arr[3]-arr[1] >= 4) printf("KIN\n");
    else printf("%d\n", arr[1]+arr[2]+arr[3]);
  }
}
