#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords ( char *sentence, int length );

int main ( void ) {

  char sentence [ 255 ];
  int lengthofstring;

  printf ( "Type a sentence: " );
  fgets ( sentence, sizeof ( sentence ), stdin );
  lengthofstring = strlen ( sentence );

  printf ( "\nThe number of words in the sentence is: %d", countWords ( sentence, lengthofstring ) );

  return 0;
}

int countWords ( char *sentence, int length ) {

  int wordCounter = 0;
  int counter;

  for ( counter = 0; counter < length; counter++ ) {
    if ( !( isspace ( sentence [ counter ] ) ) &&
       ( counter == 0 || isspace ( sentence [ counter - 1 ] ) ) )
      wordCounter++;
  }
  return wordCounter;
}