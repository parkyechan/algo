main(){
  int a, cnt1 = 0, cnt2 = 0;
  char t;
  scanf("%d", &a);
  for(int i=0; i<=a; i++){
    scanf("%c", &t);
    if(t == '2') cnt1++;
    else if(t == 'e') cnt2++;
  }
  if(cnt1>cnt2) printf("2");
  else if(cnt2>cnt1) printf("e");
  else printf("yee");
}
