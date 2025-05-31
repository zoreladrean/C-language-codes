# Divisor Finder
A simple C program that finds and displays all proper divisors of a given positive integer.

---
```c
#include <stdio.h>

int main ( void ) {

  int num;

  printf ( "Enter a positive integer: " );
  scanf ( "%d", &num );

  if ( num <= 0 ) {
    printf ( "Please enter a positive integer.\n" );
    return 1;
  }

  printf ( "The proper divisors of %d are: ", num );

  for ( int i = 1; i < num; i++ )
    if ( num % i == 0 )
      printf ( "%d ", i );

  return 0;
}
```
---
### Sample Outputs
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/divisor_finder/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/divisor_finder/sampleOutput2.PNG)
- ![sample output 3](https://github.com/zoreladrean/C-language-codes/blob/main/divisor_finder/sampleOutput3.PNG)