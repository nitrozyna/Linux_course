#include <stdio.h>
/*
* Lab 4 exercise 1 focused on pointers, the debugging question corrections.

*/
int main ( void ) {

  int i , *myPtr , **myPtrPtr ;
  int a[2] = {1 ,2};

  i = 6;

  myPtr = &i; // myPtr points to the memory location of i
  myPtrPtr = &myPtr; // myPtrPtr points to the address of myPtr

  {
  int i = 7;

  *myPtr = 45; // derefrencing myPtr locally

  // "Overriting" the value of 6 for 45 and storing it in the same memory location.
  printf (" The value %d is stored in location %p\n", *myPtr , myPtr );

  // i in this scope is different from the one above, hence a different
  // memory location
  printf (" The value %d is stored in location %p\n", i, &i);
  }

  // Printing the memory location of myPtr as well as the pointer to this location.
  printf (" The value %p is stored in the location %p\n",*myPtrPtr , myPtrPtr );

  // Changed version of the previous printf statement to print the value of i.
  printf (" The value %d is stored in the location %p\n",**myPtrPtr , myPtrPtr );

  // Since the value of i got changed locacllu the value remained the same but
  // the location hasn't changed.
  printf (" The value %d is stored in location %p\n", i, &i);

  // a gives us the location of the first element ( a gives the same asnwer as &a[0])
  // derefrencing an array gives us the the first value (a[0]), a[1] gives us the
  // second element
  printf (" a = %p, *a = %d &a = %p, a[0] = %d, a[1] = %d\n",a,*a,&a,a[0],a[1]);


return 0;

}
