int arr[1001] = {};
void fib(int a){
  if(a == 1) arr[a] = 1;
  if(arr[a] == 0) fib(a-1);
  else if(a == 2) arr[a] = 1;
  else arr[a] = arr[a-1] + arr[a-2];
}
main(){
  int N;
  scanf("%d", &N);
  fib(N);
  printf("%d", arr[N]);
}
