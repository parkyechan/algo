#include<stdio.h>

int main(){
  int a, b, min = 210000000;
  char arr[1001][1001] = {};
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    scanf("%s", &arr[i]);
  }
  int tmp1 = 0, tmp2 = 0;
  if(a == 8 && b == 8){
    for(int i=0; i<8; i++){
      for(int j=0; j<8; j++){
      // printf("%d ", j);
        if(i%2 == 0){
          if(arr[i][j] != 'B') tmp1++;
          if(arr[i][j+1] != 'W') tmp1++;
          if(arr[i][j] != 'W') tmp2++;
          if(arr[i][j+1] != 'B') tmp2++;
          j++;
        }else{
          if(arr[i][j] != 'W') tmp1++;
          if(arr[i][j+1] != 'B') tmp1++;
          if(arr[i][j] != 'B') tmp2++;
          if(arr[i][j+1] != 'W') tmp2++;
          j++;
        }
      }
      // printf("\n");
      if(tmp1 > tmp2) printf("%d", tmp2);
      else printf("%d", tmp1);
      return 0;
    }
  }else if(a > 8 && b == 8){
    for(int k=0; k<a-8; k++){
      for(int i=k; i<8+k; i++){
        for(int j=0; j<8; j++){
        // printf("%d ", j);
          if(i%2 == 0){
            if(arr[i][j] != 'B') tmp1++;
            if(arr[i][j+1] != 'W') tmp1++;
            if(arr[i][j] != 'W') tmp2++;
            if(arr[i][j+1] != 'B') tmp2++;
            j++;
          }else{
            if(arr[i][j] != 'W') tmp1++;
            if(arr[i][j+1] != 'B') tmp1++;
            if(arr[i][j] != 'B') tmp2++;
            if(arr[i][j+1] != 'W') tmp2++;
            j++;
          }
        }
      }
      if(tmp1 < min) min = tmp1;
      if(tmp2 < min) min = tmp2;
      tmp1 = 0; tmp2 = 0;
    }
  }else if(a == 8 && b > 8){
    for(int k=0; k<b-8; k++){
      for(int i=0; i<8; i++){
        for(int j=k; j<8+k; j++){
        // printf("%d ", j);
          if(i%2 == 0){
            if(arr[i][j] != 'B') tmp1++;
            if(arr[i][j+1] != 'W') tmp1++;
            if(arr[i][j] != 'W') tmp2++;
            if(arr[i][j+1] != 'B') tmp2++;
            j++;
          }else{
            if(arr[i][j] != 'W') tmp1++;
            if(arr[i][j+1] != 'B') tmp1++;
            if(arr[i][j] != 'B') tmp2++;
            if(arr[i][j+1] != 'W') tmp2++;
            j++;
          }
        }
      }
      if(tmp1 < min) min = tmp1;
      if(tmp2 < min) min = tmp2;
      tmp1 = 0; tmp2 = 0;
    }
  }else if(a > 8 && b > 8){
    for(int l=0; l<b-8; l++){
      for(int k=0; k<a-8; k++){
        for(int i=k; i<8+k; i++){
          for(int j=b; j<8+b; j++){
          // printf("%d ", j);
            if(i%2 == 0){
              if(arr[i][j] != 'B') tmp1++;
              if(arr[i][j+1] != 'W') tmp1++;
              if(arr[i][j] != 'W') tmp2++;
              if(arr[i][j+1] != 'B') tmp2++;
              j++;
            }else{
              if(arr[i][j] != 'W') tmp1++;
              if(arr[i][j+1] != 'B') tmp1++;
              if(arr[i][j] != 'B') tmp2++;
              if(arr[i][j+1] != 'W') tmp2++;
              j++;
            }
          }
        }
        if(tmp1 < min) min = tmp1;
        if(tmp2 < min) min = tmp2;
        tmp1 = 0; tmp2 = 0;
      }
    }
  }
  // printf("tmp1 : %d, tmp2 : %d", tmp1, tmp2);
  printf("%d", min);
}
