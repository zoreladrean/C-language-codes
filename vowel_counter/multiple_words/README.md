# Vowel Counter
This program counts the number of vowels in a user-input string.

---
-   Counts both uppercase and lowercase vowels (A, E, I, O, U)
-   Handles strings with spaces and special characters
-   Proper grammar in output ("is" for 1 vowel, "are" for multiple)
-   Safe input handling with  `fgets()`
-   Efficient vowel detection using  `strchr()`

---
### Code:
```c
#include <stdio.h>
#include <string.h>

int vowelCounter ( char sentence [ ], int size );
```
```c
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
```

```c
int vowelCounter ( char sentence [ ], int size ) {

  int counter = 0;

  for ( int i = 0; i < size; i++ )
    if ( strchr ( "AEIOUaeiou", sentence [ i ] ) )
      counter++;

  return counter;
}
```

---

### Sample Outputs:
-  ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/vowel_counter/multiple_words/sampleOutput1.PNG)
-  ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/vowel_counter/multiple_words/sampleOutput2.PNG)