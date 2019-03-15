#include<stdio.h>
#include<string.h>
int main(){
  int N, tmp;
  char a[70];
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%s", a);
    tmp = strlen(a);
    if(a[tmp-1] == '0' || a[tmp-1] == '2' || a[tmp-1] == '4' || a[tmp-1] == '6' || a[tmp-1] == '8') printf("even\n");
    if(a[tmp-1] == '1' || a[tmp-1] == '3' || a[tmp-1] == '5' || a[tmp-1] == '7' || a[tmp-1] == '9') printf("odd\n");
  }
}
