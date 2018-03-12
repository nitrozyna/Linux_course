/*
* Lab 5, exercise 2. Drawing a polygon from n sides provided in command line argument.
* When "square" is typed, n is interpreted as 4.
* Malgorzata Kurkiewicz, 2145411k
*/
#include <stdio.h>
#include "turtle.h"
#include <math.h>
#include <string.h>

#define WIDTH 256
#define HEIGHT 256

int main(int argc, char *argv[])
{

	int n;

	// pass n = 4, if "square" provided in a command line argument
	if(strcmp(argv[0],"./square") == 0 ){
		n = 4;
	// Check input makes a valid polygon
	} else if(argc != 2){
		printf("You have not provided the right number to create a polygon\n");
		return 1;
	} else {
		sscanf(argv[1], "%d", &n);

		if( n < 3 ){
			printf("Cannot draw a polygon with %d sides\n", n);
			return 2;
		}
	}

	// start to draw
	// getting the grid ready and putting the pen down
	turtle_init(WIDTH, HEIGHT);
	double angle = 360/n;
	void turtle_pen_down(void);

	// dependent on n, drawing the appropriate polygon
	int i;
	for(i=1;i<=n;i++){
		turtle_forward(20);
		turtle_turn_left(angle);
	}

	// placing the result in a file
	const char *filename = "mylogo.png";
	turtle_save_png(filename);
	return 0;
}
