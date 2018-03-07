
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * Exercise 2, lab 3
 *
 * Program asking for a string and if the string contains any upper chatacters,
 * changes them to lower case and prints the result, otherwise prints
 * "Your string contains only lower characters.".
 * Malgorzata Kurkiewicz, 2145411k
 */

int main(void){

	char string[100];

	int isUpper = 0;	//when 0, string is lower case, when 1 string contains uppercase characters

	char outputString[strlen(string)] ;

	// asking a user to input a string
	printf("Enter a string\n");
	// reading the input
	fgets( string, 100, stdin );



	for(int i = 0; i < strlen(string); i++){
		//converting any upper case characer to lower case
		if( isupper(string[i]) ) {
			char lowered = tolower(string[i]);
			outputString[i] = lowered;
			isUpper = 1;
		}else{
			outputString[i] = string[i];
		}

	}

	if(isUpper == 0){
		printf("Your string contains only lower characters.\n");
	// if string was upper case, priting out characters converted to lower case
	}else{
		for (int i=0; i<strlen(outputString);i++){
			printf("%c",outputString[i]);
		}
	}

	return 0;

}
