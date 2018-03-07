#include <stdio.h>
/* Corrected by Malgorzata Kurkiewicz, 2145411k
*/
struct TwoDPoint {
	double x, y;
	};

int main ( void ) {

	// defining a new elements of type struct
	// declaration of twoDPoint before initialization
	struct TwoDPoint a, b = {0.0 ,0.0};


	// indentation of this block is not necessary, however it doesn't make the
	// program function incorrectly since we don't use anything
	// with the same name outside of it
	char input [100];

	puts (" Please enter the x and y coordinates of the 1st point , separated by a comma .");

	fgets ( input , sizeof ( input ), stdin );

	// changed the type of TwoDPoint to a double
	sscanf ( input ,"%lf ,%lf", &(a.x), &(a.y));
	puts (" Please enter the x and y coordinates of the 2nd point , separated by a comma .");
	fgets ( input , sizeof ( input ), stdin );

	// changed the format to expect a double
	sscanf ( input ,"%lf ,%lf", &(b.x), &(b.y));

	double x_dist = (a.x - b.x), y_dist = (a.y - b.y);

	printf (" The square of the distance between the two points is : %f\n", ( x_dist * x_dist )+( y_dist * y_dist ));


	return 0;
}
