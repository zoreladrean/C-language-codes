# String Reversal (*enhanced version*)
This program reverses an input string in-place using character swapping.

---
-   Safely handles input with spaces using  `fgets()`
-   Removes trailing newline character with  `strtok()`
-   Reverses the string in-place using a two-pointer swapping technique

---
### Code:
```c
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
```

---

### Sample Outputs:
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/reverse_a_string/enhanced_version/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/reverse_a_string/enhanced_version/sampleOutput2.PNG)