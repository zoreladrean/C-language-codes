#include <stdio.h>
#include <string.h>

int vowelCounter ( char sentence [ ], int size );

int main ( void ) {

  char sentence [ 255 ];

  printf ( "\nEnter a string: " );

  fgets ( sentence, sizeof ( sentence ), stdin );
  strtok ( sentence, "\n" );

  int len = strlen ( sentence );

  int countVowels = vowelCounter ( sentence, len );

  if ( countVowels == 0 || countVowels == 1 )
    printf ( "The number of vowels in the string is: %d", countVowels );
  else
    printf ( "The number of vowels in the string are: %d", countVowels );

  return 0;
}

int vowelCounter ( char sentence [ ], int size ) {

  int counter = 0;

  for ( int i = 0; i < size; i++ )
    if ( strchr ( "AEIOUaeiou", sentence [ i ] ) )
      counter++;

  return counter;
}