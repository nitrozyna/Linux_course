#include <stdio.h> // added the standard libray header, otherwise the following error for the printf statement appears: "incompatible implicit declaration of built-in function ‘printf’"

int k = 4;

int main ( void ) {

	int i = 50; // first variable i declaration and allocation

	unsigned int j = i * 2; // first j variable declaration and allocation

	printf ("The value of i and j are %d and %d resepectively and the types are both integers.\n",i,j);

	double k = 1.0; // added a semicolon, otherwise the following error is thrown: "expected ‘,’ or ‘;’ before ‘{’ token" also k is being redefined and out of scope

	printf ("k is a double equal to %f.\n",k);

	{

	float i = 5.0; // i redefined and now being in scope

	printf ("In this scope i is a float and equal to %3f.\n",i);

	//printf ("The value of i is %3f\n", i);

	k = i * j;// k allocated and now being in scope

	printf ("In this scope k is a double and equal to %f.\n",k);

	i *= 6;// variable i allocation again, now being in scope

	printf ("Now, in the same scope i is a float and equal to %f.\n",i);

	}

	//double j; //variable j was already defined in this scope so we can either comment it out or we can cast it. I chose to comment it since we don't use it after this statement, so it does not matter if we cast it or not

	i = k + i; // or i += k, i being allocated again out of scope

	printf ("Now, the value of i is %d.\n", i);
	printf("It is out of scope again and it is an integer.\n");

	return 0;

}
