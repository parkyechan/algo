#include<math.h>
main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  double tmp = (double)c / (double)b;
  printf("%lf", tmp);
  tmp *= 100;
  tmp += 0.5;
  floor(tmp);
  printf("\n");
  printf("%d", (int)tmp);
  // // while(a != b * b + c * c){
  // //   b++;
  // //   c++;
  // // }
  // for(int i=0; i<20; i++){
  //   printf("%.lf %.lf\n", a, sqrt(pow(b, 2)+pow(c, 2)));
  // }
}
