#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome ( const char *string );

int main ( void ) {
  char string [ 255 ];

  printf ( "Enter a string: " );
  fgets ( string, sizeof ( string ), stdin );

  if ( isPalindrome ( string ) )
    printf ( "The string is a palindrome.\n" );
  else
    printf ( "The string is not a palindrome.\n" );

  return 0;
}

int isPalindrome ( const char *string ) {
  int left = 0;
  int right = strlen ( string ) - 1;

  while ( left < right ) {
    //move left index to the next alphanumeric character
    while ( left < right && !isalnum ( string [ left ] ) )
      left++;

    //move right index to the previous alphanumeric character
    while ( left < right && !isalnum ( string [ right ] ) )
      right--;
    
    //compare characters and ignore case
    if ( tolower ( string [ left ] ) != tolower ( string [ right ] ) )
      return 0;

    //move to the center
    left++;
    right--;
  }

  return 1; //if its a palindrome
}