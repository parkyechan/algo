main(){
  int cnt = 0, flag = 0, res = 0;
  char arr[1001] = {};
  scanf("%s", arr);
  while(1) if(arr[cnt++] == '\0') break;
  for(int i=0; i<cnt; i++){
    if(arr[i] == 'c' && arr[i+1] == '='){
      res++;
      i++;
    }else if(arr[i] == 'c' && arr[i+1] == '-'){
      res++;
      i++;
    }else if(arr[i] == 'c' && arr[i+1] == '='){
      res++;
      i++;
    }else if(arr[i] == 'd' && arr[i+1] == 'z' && arr[i+2] == '='){
      res++;
      i++;
      i++;
    }else if(arr[i] == 'd' && arr[i+1] == '-'){
      res++;
      i++;
    }else if(arr[i] == 'l' && arr[i+1] == 'j'){
      res++;
      i++;
    }else if(arr[i] == 'n' && arr[i+1] == 'j'){
      res++;
      i++;
    }else if(arr[i] == 's' && arr[i+1] == '='){
      res++;
      i++;
    }
    else if(arr[i] == 'z' && arr[i+1] == '='){
      res++;
      i++;
    }
    else res++;
  }
  printf("%d", res-1);
}
