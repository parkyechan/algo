#include <stdio.h>
#include <time.h>

int main() {
  time_t timer;
  struct tm *t;
  timer = time(NULL);

  t = localtime(&timer);

  printf("%d\n",   t->tm_year + 1900);
  printf("%.2d\n",   t->tm_mon + 1);
  printf("%d\n\n", t->tm_mday);

}
