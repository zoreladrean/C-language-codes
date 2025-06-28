#include <stdio.h>

int factorial ( int num );

int main ( void ) {

  int num;

  printf ( "Enter a number: " );
  scanf ( "%d", &num );

  if ( num < 0 )
    printf ( "Please enter a non-negative number." );
  else
    printf ( "The factorial is: %d", factorial ( num ) );

  return 0;
}

int factorial ( int num ) {

  if ( num == 0 || num == 1 )
    return 1;
  else
    return num * factorial ( num - 1 );
}