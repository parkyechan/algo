main(){
  int a, b;
  int sum = 0;
  while(1){
    scanf("%d %d", &a, &b);
    a = a * 60;
    sum += a + b; 
    int min =  sum / 60;
    int sec = sum % 60;
    printf("%d %d\n", min, sec);
  }
}
