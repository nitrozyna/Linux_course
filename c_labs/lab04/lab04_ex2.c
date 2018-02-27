#include<stdio.h>
#include<stdlib.h>
/*
* Lab 4, exercise 2, programming factorial and recursive factorial. Learning how
* to pass command line arguments.
*/

// factorial function with no recursion involved
int factorial(int number){
  int result = 1;

  // 1 * 1 = 1, so starting the loop from 2, looping until the number given
  for (int i = 2; i <= number; i++)
  // multiplying previous results with i (current number)
    result = i * result;
  return result;
}

// recursive factorial
int rfactorial(int n){

  // recursively calling factorial until 1 is reached and then multiplying by n
  if (n > 1){
    return n * rfactorial(n-1);
    // base case
  } else {
    return 1;
  }
}

// main function designed to use command line arguments (recursion used for testing)
int main(int argc, char *argv[]){

  // looping over the arguments given
  for(int i = 1; i < argc; i++){
    // string to long conversion of the argument given
    int arg = strtol(argv[i], NULL, 10);

    // calling the recursive factorial on the arguments
    printf("%d\n",rfactorial(arg));
  }
  return 0;
}
