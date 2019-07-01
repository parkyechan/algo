main(){
  char arr[1001] = {};
  int i = 0, hp = 0, un = 0, sad = 0;
  while(1){
    arr[i++] = getchar();
    if(arr[i-1] == '\n') break;
  }
  for(int k = 2; k<i; k++){
    if(arr[k-2] == ':' && arr[k-1] == '-' && arr[k] == ')') hp++;
    else if(arr[k-2] == ':' && arr[k-1] == '-' && arr[k] == '(') sad++;
  }
  if(hp > sad) printf("happy");
  else if(sad > hp) printf("sad");
  else if(sad == hp && hp !=0) printf("unsure");
  else if(sad == 0 && hp == 0) printf("none");
}
