# String Character Substring Generator
This program finds the first occurrence of a character in a string and prints the substring starting from that character.

---
-   Safe string input using  `fgets()`
    
-   Newline removal using  `strtok()`
    
-   Character search using efficient  `strchr()`  standard library function
---
### Code sample:
```c
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
```
---
### Sample Outputs:
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/print_string_from_first_occurence_of_char_inputted/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/print_string_from_first_occurence_of_char_inputted/sampleOutput2.PNG)
- ![sample output 3](https://github.com/zoreladrean/C-language-codes/blob/main/print_string_from_first_occurence_of_char_inputted/sampleOutput3.PNG)