#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
 *
 * Exercise 1, lab 3
 *
 * Create a 2D array with random data and
 * ready to be displayed in a pgm image
 */
int main(void)
{

	int pixels[10][10];
	srand(time(NULL));

	for(int i=0;i<10;i++){
		for ( int iTwo=0;iTwo<10;iTwo++){
			// random pattern
			int random = (rand()%255);
			pixels[i][iTwo] = random;

		}

	}

	//creating the header
	printf("P2 10 10 15\n");
	//printing out the data
	for( int i=0;i<10;i++){
		for(int iTwo=0;iTwo<10;iTwo++){
			printf("%d ", pixels[i][iTwo]);
		}
		printf("\n");
	}

	return 0;
}
