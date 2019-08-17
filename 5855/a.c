main(){
  int N, cnt = 0;
  scanf("%d", &N);
  N = 1000 - N;
  while(1){
    if(N >= 500){
      cnt++;
      N -= 500;
    }else{
      break;
    }
  }
  while(1){
    if(N >= 100){
      cnt++;
      N -= 100;
    }else{
      break;
    }
  }
  while(1){
    if(N >= 50){
      cnt++;
      N -= 50;
    }else{
      break;
    }
  }while(1){
    if(N >= 10){
      cnt++;
      N -= 10;
    }else{
      break;
    }
  }while(1){
    if(N >= 5){
      cnt++;
      N -= 5;
    }else{
      break;
    }
  }while(1){
    if(N >= 1){
      cnt++;
      N -= 1;
    }else{
      break;
    }
  }
  printf("%d", cnt);
}
