#include <stdio.h>
#include <string.h>

int main ( void ) {

  char string [ 255 ];
  char character;

  printf ( "Enter a string: " );
  fgets ( string, sizeof ( string ), stdin );
  strtok ( string, "\n" ); //remove newline character from the end of the string by tokenizing it

  printf ( "Enter a character: " );
  scanf ( " %c", &character );

/*
  //this also removes newline character from the end of the string if it exists...
  int size = strlen ( string ); 
  if ( size > 0 && string [ size - 1 ] == '\n' )
    string [ size - 1 ] = '\0';
*/

  char *position;
  position = strchr ( string, character ); //find the first occurence of the character in the string

  //check if character is found
  if ( position ) //if position equals to true
    printf ( "New string: %s", position );
  else
    printf ( "Character not found!" );

  return 0;
}