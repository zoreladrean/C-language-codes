#include <stdio.h>

void reverseInt ( int num );

int main ( void ) {

  int num;

  printf ( "Enter an integer: " );
  scanf ( "%d", &num );

  reverseInt ( num );

  return 0;
}

void reverseInt ( int num ) {

  int rem, sum = 0;

  while ( num != 0 ) {

    rem = num % 10;
    sum = sum * 10 + rem;
    num /= 10;

  }

  printf ( "%d", sum );
}