# Second Largest Number Finder

This program finds the largest and second largest numbers from 10 user inputs.

-   Tracks the largest and second largest numbers in real-time  
-   Uses minimal variables (no arrays required) 
-   Handles duplicate values correctly
-   Efficient memory usage

## Code:

```c
#include <stdio.h>

int main ( void ) {

  int num, counter = 1, largest = 0, secondLargest = 0;

  while ( counter <= 10 ) {

    printf ( "Enter a number: " );
    scanf ( "%d", &num );

    if ( counter == 1 )
      largest = num;
    else
      if ( num > largest ) {
        secondLargest = largest;
        largest = num;
      }
      else
        if ( num > secondLargest )
          if ( num != largest )
            secondLargest = num;
    
    counter++;
  }

  printf ( "\nLargest number: %d", largest );
  printf ( "\nSecond largest: %d", secondLargest );

  return 0;
}
```
---
### Sample Output:
- ![sample output]()