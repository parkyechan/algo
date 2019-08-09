main(){
  for(int s=0; s<3; s++){
    int count = 0, max = 0;
    int cnt = 0;
    char arr[10] = {};
    scanf("%s", arr);
    for(int i=0; i<7; i++){
      if(arr[i] == arr[i+1]){
        count++;
      }else{
        count = 0;
      }
      if(count > max) max = count;
    }
    printf("%d\n", max+1);
  }
}
