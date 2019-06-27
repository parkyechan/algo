#include<stdio.h>
#include<malloc.h>
int main(){
  int N, *age;
  char **name;
  age = (int *)malloc(sizeof(int));
  // name = (char **)malloc(sizeof(char));
  // for(int i)
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &age[i]);
    // scanf("%d %s", &age[i], name[i]);
  }

}
