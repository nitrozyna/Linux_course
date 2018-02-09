#include <stdio.h>

int main(void){

  int bottles;

  printf (" Enter an integer \n");
  scanf("%d", &bottles);


  while (bottles != 1){
    printf("%.d Green Bottles, sitting on the wall\n%d Green Bottles, sitting on the wall\nand if 1 Green Bottle should accidentally fall...\n...there'll be %d Green Bottles,sitting on the wall.\n", bottles,bottles,(bottles-1));
    bottles = bottles - 1;
  }

  if (bottles==1){
    printf("%d Green Bottle, sitting on the wall\n%d Green Bottle, sitting on the wall\nand if 1 Green Bottle should accidentally fall...\n...there'll be no green Bottles,sitting on the wall.",1,1);
  }
  return 0;
}
