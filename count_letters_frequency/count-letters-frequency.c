#include <stdio.h>
#include <ctype.h>

int countLetter ( char *string, char letter );

int main ( void ) {

  char string [ 255 ];

  printf ( "Enter the string: " );
  fgets ( string, sizeof ( string ), stdin );

  for ( char letter = 'A'; letter <= 'Z'; letter++ ) { //loop through each letter from  A to Z
    int numOfLetters = countLetter ( string, letter );
    
    if ( numOfLetters > 0 )
      printf ( "\nTotal number of occurrences of letter %c or %c: %d", letter, tolower ( letter ), numOfLetters );
    else
      continue;
  }

  return 0;
}

int countLetter ( char *string, char letter ) {

  int count = 0;

  for ( int i = 0; string [ i ] != '\0'; i++ ) //loop through each character until null terminator is reached
    if ( tolower ( string [ i ] ) == tolower ( letter ) ) //check if current character matches the target letter
      count++;
  
  return count;
}