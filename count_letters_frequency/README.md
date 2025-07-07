# Letter Frequency Counter
This program counts the occurrences of each letter (A-Z) in a user-input string, treating uppercase and lowercase as the same.

---
-   Counts occurrences of each letter from A to Z
-   Case-insensitive comparison (treats 'A' and 'a' as same)
-   Ignores non-alphabetic characters
-   Only displays letters that appear at least once

---
### Code:
```c
#include <stdio.h>
#include <ctype.h>

int countLetter ( char *string, char letter );
```

```c
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

```

```c
int countLetter ( char *string, char letter ) {

  int count = 0;

  for ( int i = 0; string [ i ] != '\0'; i++ ) //loop through each character until null terminator is reached
    if ( tolower ( string [ i ] ) == tolower ( letter ) ) //check if current character matches the target letter
      count++;
  
  return count;
}
```

---
### Sample Outputs:
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/count_letters_frequency/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/count_letters_frequency/sampleOutput2.PNG)
- ![sample output 3](https://github.com/zoreladrean/C-language-codes/blob/main/count_letters_frequency/sampleOutput3.PNG)
- ![sample output 4](https://github.com/zoreladrean/C-language-codes/blob/main/count_letters_frequency/sampleOutput4.PNG)