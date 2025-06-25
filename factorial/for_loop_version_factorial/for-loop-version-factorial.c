#include <stdio.h>

int factorial ( int n, int *result );

int main ( void ) {

  int n;
  int result = 1;

  printf ( "Enter a number: " );
  scanf ( "%d", &n );

  int num = factorial ( n, &result );

  if ( num > 0 )
    printf ( "The factorial is: %d", num );
  else
    printf ( "Please enter a non-negative number.\n" );

  return 0;
}

int factorial ( int n, int *result ) {
  
  if ( n < 0 )
    return -1;
  else
    if ( n == 0 || n == 1 )
      return *result;
    else
      for ( int i = 2; i <= n; i++ )
        *result *= i;

  return *result;
}