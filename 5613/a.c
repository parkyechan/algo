main(){
  int a, c, sum = 0, tmp;
  char b[10] = {};
  scanf("%d", &a);
  sum = a;
  while(1){
    scanf("%c", &b[0]);
    if(b[0] == '=') break;
    scanf("%d", &a);
    if(b[0] == '+'){
      sum = sum + a;
    }else if(b[0] == '-'){
      sum = sum - a;
    }else if(b[0] == '*'){
      sum *= a;
    }else if(b[0] == '/'){
      sum /= a;
    }
  }
  printf("%d" , sum);
}
