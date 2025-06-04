#include <stdio.h>

int fibonacci ( int n );

int main ( void ) {

  int len;

  printf ( "Enter the length: " );
  scanf ( "%d", &len );

  for ( int i = 1; i <= len; i++ )
    printf ( "%d\t", fibonacci ( i ) );

  return 0;
}

int fibonacci ( int n ) {
  
  if ( n == 0 || n == 1 )
    return n;
  else
    return fibonacci ( n - 1 ) + fibonacci ( n - 2 );
}