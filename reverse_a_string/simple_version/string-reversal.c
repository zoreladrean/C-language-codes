#include <stdio.h>
#include <string.h>

int main ( void ) {

  char string [ 255 ];

  printf ( "Enter the string: " );
  fgets ( string, sizeof ( string ), stdin );
  strtok ( string, "\n" );

  int len = strlen ( string );

  printf ( "Reverse string: " );
  for ( int i = len - 1; i >= 0; i-- )
    printf ( "%c", string [ i ] );

  return 0;
}