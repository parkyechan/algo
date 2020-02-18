main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int times[101] = {};
  int ta1, ta2, tb1, tb2, tc1, tc2;
  scanf("%d %d", &ta1, &ta2);
  scanf("%d %d", &tb1, &tb2);
  scanf("%d %d", &tc1, &tc2);
  for(int i=ta1; i<ta2; i++) times[i]++;
  for(int i=tb1; i<tb2; i++) times[i]++;
  for(int i=tc1; i<tc2; i++) times[i]++;
  int sum = 0;
  for(int i=0; i<=100; i++){
    if(times[i] == 0) continue;
    else if(times[i] == 1) sum += a;
    else if(times[i] == 2) sum += b * 2;
    else if(times[i] == 3) sum += c * 3;
  }
  printf("%d", sum);
}
