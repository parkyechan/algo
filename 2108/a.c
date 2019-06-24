#include<stdio.h>
#include<stdlib.h>
int main()
{
  int N, arr[100001] = {}, a = 0, c[100001] = {}, b = 0, d = 0, tmp, max = 0, e[100001] = {}, k = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++)
  {
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i<N; i++)
  {
    for(int j = 0 ; j < N - 1; j++)
    {
      if(arr[j] > arr[j+1])
      {
        tmp  = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = tmp;
      }
    }
  }
  for(int i = 0; i<100001; i++)
  {
    a += arr[i];
    if(arr[i] > 0)
      c[arr[i]]++;
    else{
      e[(-1)*arr[i]]++;
    }
  }
  for(int i = 0; i<100001; i++)
  {
    if(c[i] > max) max = arr[i];
    if(e[i] > max) max = arr[i];
  }
  if(a<0) a -= 1;
  printf("%d\n%d\n%d\n%d\n", a/(N), arr[N/2], max, arr[N-1] - arr[0]);
}
