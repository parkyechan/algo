#include<string.h>
main(){
  int N;
  int min_mon = 13, min_day = 32, min_year = 9999;
  int max_mon = 0, max_day = 0, max_year = 0;
  int mon, day, year;
  char  max_name[1001] = {}, min_name[1001] = {};
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    int arr[1001] = {};
    scanf("%s %d %d %d", arr, &day, &mon, &year);
    if(year > max_year){
      strcpy(max_name, arr);
      max_year = year;
      max_mon = mon;
      max_day = day;
    }else if(year == max_year && mon > max_mon){
      strcpy(max_name, arr);
      max_mon = mon;
      max_day = day;
    }else if(year == max_year && mon == max_mon && day > max_day){
      strcpy(max_name, arr);
      max_day = day;
    }
    if(year < min_year){
      strcpy(min_name, arr);
      min_year = year;
      min_mon = mon;
      min_day = day;
    }else if(year == min_year && mon < min_mon){
      strcpy(min_name, arr);
      min_mon = mon;
      min_day = day;
    }else if(year == min_year && mon == min_mon && day < min_day){
      strcpy(min_name, arr);
      min_day = day;
    }
  }
  printf("%s\n%s\n", max_name, min_name);
}
