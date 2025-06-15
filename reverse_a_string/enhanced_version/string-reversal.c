#include <stdio.h>
#include <string.h>

void reverseString ( char *str );

int main ( void ) {

  char string [ 255 ];

  printf ( "Enter the string: " );
  fgets ( string, sizeof ( string ), stdin );
  strtok ( string, "\n" );

  reverseString ( string );

  printf ( "Reversed string: %s", string );

  return 0;
}

void reverseString ( char *str ) {
  int len = strlen ( str );

  for ( int i = 0, j = len - 1; i < j; i++, j-- ) {

    char temp = str [ i ];
    str [ i ] = str [ j ];
    str [ j ] = temp;
  }
}