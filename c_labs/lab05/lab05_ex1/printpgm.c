#include "printpgm.h"

/*
* Lab 5, exercise 1. Adding a makefile to a program which displays
* an image (lab 3, exercise 1).
*/

// function which takes an array and fills it with the desired image parameters
void imageSetUp(int x, int y,int pixels[x][y]){
  //int pixels[x][y];
  srand(time(NULL));

  // looping over the width and the height
  for(int i=0;i<x;i++){
    for ( int iTwo=0;iTwo<y;iTwo++){
      // random pattern
      int random = (rand()%255);
      pixels[i][iTwo] = random;
    }
  }
}

// displaying an image given the array size
int imageDisplay(int x, int y,int pixels[x][y]){
  // creating the header
	printf("P2 %d %d 15\n", x, y);
	// printing out the data (looping over width and height)
	for( int i=0;i<x;i++){
		for(int iTwo=0;iTwo<y;iTwo++){
			printf("%d ", pixels[i][iTwo]);
		}
		printf("\n");
	}
  return 0;
}

// setting up x and y coordinates and adding a -h feature
int main(int argc, char *argv[]){
  int x = 500;
  int y = 500;
  int pixels[x][y];
  // when the number of arguments is more than 1
  if(argc > 1){
    // if the second arguemnt is equal to -h, print the description, otherwise
    // inform the user about the wrong input
    if(strcmp(argv[1],"-h") == 0){
      printf("Program that displays an image\n");
    } else {
      printf("Unknown argument\n");
    }

  } else {
    // displaying an image using functions above
    imageSetUp(x,y,pixels);
    imageDisplay(x,y,pixels);
  }
}
