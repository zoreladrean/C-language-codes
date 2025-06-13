# String Reversal (*simple version*)
This program reverses an input string character by character.

---
- Safely handles input with spaces using  `fgets()`
- Removes newline character using `strtok`
- Reverses the string in-place without additional memory
- Preserves original casing and special characters

---
### Code:
```c
#include <stdio.h>
#include <string.h>

int main ( void ) {

  char string [ 255 ];

  printf ( "Enter the string: " );
  fgets ( string, sizeof ( string ), stdin );
  strtok ( string, "\n" );

  int len = strlen ( string );

  printf ( "Reverse string: " );
  for ( int i = len - 1; i >= 0; i-- )
    printf ( "%c", string [ i ] );

  return 0;
}
```
:warning:
*This program is not a true in-place reversal (prints but doesn't store reversed string), and it also modifies the original string.* 

---

### Sample Outputs:
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/reverse_a_string/simple_version/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/reverse_a_string/simple_version/sampleOutput2.PNG)