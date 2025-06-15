#include <stdio.h>
#include <string.h>

int main ( void ) {

  char string [ 255 ];

  printf ( "Enter the string: " );
  fgets ( string, sizeof ( string ), stdin );
  strtok ( string, "\n" );

  int len = strlen ( string );

  for ( int i = 0, j = len - 1; i < j; i++, j-- ) { //in-place reversal
    
    char temp = string [ i ];
    string [ i ] = string [ j ];
    string [ j ] = temp;
  }

  printf ( "Reversed string: %s", string );

  return 0;
}