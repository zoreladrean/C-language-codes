#include <stdio.h>

void reverseInt ( int num );

int main ( void ) {

  int num;

  printf ( "Enter an integer: " );
  scanf ( "%d", &num );

  reverseInt ( num );

  return 0;
}

/*
void reverseInt ( int num ) {

  int rem, sum = 0;

  while ( num != 0 ) {
    rem = num % 10; //extract last digit
    sum = sum * 10 + rem; //add that last digit to sum
    num /= 10; //remove last digit
  }

  printf ( "Reversed integer: %d", sum );
}
*/

void reverseInt ( int num ) {

  int rem, sum = 0;
  int isNegative = num < 0;

  if ( isNegative ) //handles negative numbers
    num = -num;

  while ( num != 0 ) {
    rem = num % 10; //extract last digit
    sum = sum * 10 + rem; //add that last digit to sum
    num /= 10; //remove last digit
  }

  if ( isNegative )
    sum = -sum;

  printf ( "Reversed integer: %d", sum );
}