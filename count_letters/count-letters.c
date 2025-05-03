#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countLetters ( char *sentence, int length );

int main ( void ) {

  char sentence [ 255 ];
  int lengthOfString;

  printf ( "Type a sentence: " );
  fgets ( sentence, sizeof ( sentence ), stdin );
  lengthOfString = strlen ( sentence );

  printf ( "\nThe number of letters is %d", countLetters ( sentence, lengthOfString ) );

  return 0;
}

int countLetters ( char *sentence, int length ) {
  int numOfLetters = 0;

  for ( int counter = 0; counter < length; counter++ ) {
    if ( isalpha ( sentence [ counter ] ) )
      numOfLetters++;
    else
      if ( sentence [ counter ] == ' ' )
        continue;
  }
  return numOfLetters;
}