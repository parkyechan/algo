main(){
  int N;
  scanf("%d", &N);
  for(int i=N; i>0; i--){
    if(i-1 == 0){
      printf("%d bottle of beer on the wall, %d bottle of beer. \nTake one down and pass it around, no more bottles of beer on the wall.\n\n", i, i);
      break;
    }
    if(i == 2){
      printf("%d bottles of beer on the wall, %d bottles of beer. \nTake one down and pass it around, %d bottle of beer on the wall.\n\n", i, i, i-1);
      continue;
    }
    printf("%d bottles of beer on the wall, %d bottles of beer. \nTake one down and pass it around, %d bottles of beer on the wall.\n", i, i, i-1);
    printf("\n");
  }
  if(N != 1) printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, %d bottles of beer on the wall.\n", N);
  else printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, %d bottle of beer on the wall.\n", N);
}
