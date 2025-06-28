# Factorial Calculator *(recursive version)*
This program calculates the factorial of a number using recursion.

---
-   Pure recursive implementation of factorial calculation
-   Handles both positive integers and zero
-   Base case handling for 0! and 1!

---
### Code:
```c
#include <stdio.h>

int factorial ( int num );

int main ( void ) {

  int num;

  printf ( "Enter a number: " );
  scanf ( "%d", &num );

  if ( num < 0 )
    printf ( "Please enter a non-negative number." );
  else
    printf ( "The factorial is: %d", factorial ( num ) );

  return 0;
}

int factorial ( int num ) {

  if ( num == 0 || num == 1 )
    return 1;
  else
    return num * factorial ( num - 1 );
}
```

---

### Sample Output:
-  ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/factorial/recursive_version_factorial/sampleOutput1.PNG)
-  ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/factorial/recursive_version_factorial/sampleOutput2.PNG)
-  ![sample output 3](https://github.com/zoreladrean/C-language-codes/blob/main/factorial/recursive_version_factorial/sampleOutput3.PNG)