main(){
  int i = 0, tmp, trap[3] = {1, 0, 0};
  char arr[1001] = {};
  scanf("%s", arr);
  while(arr[i] != '\0'){
    if(arr[i] == 'A'){
      tmp = trap[0];
      trap[0] = trap[1];
      trap[1] = tmp;
    }else if(arr[i] == 'B'){
      tmp = trap[2];
      trap[2] = trap[1];
      trap[1] = tmp;
    }else if(arr[i] == 'C'){
      tmp = trap[0];
      trap[0] = trap[2];
      trap[2] = tmp;
    }
    i++;
  }
  for(int i=0; i<3; i++){
    if(trap[i] == 1) printf("%d", i+1);
  }
}
