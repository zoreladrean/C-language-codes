# Average of Odd Numbers Calculator
This program calculates the average of odd numbers in a user-provided array.

---
### Code Sample:
```c
#include <stdio.h>

float averageOdd ( int arr [ ], int size );

int main ( void ) {
  int size;
  printf ( "How many numbers do you want to enter? " );
  scanf ( "%d", &size );
  int arr [ size ];
  int len = sizeof ( arr ) / sizeof ( arr [ 0 ] );

  for ( int i = 0; i < len; ++i ) {
    printf ( "%d.) ", i + 1 );
    scanf ( "%d", &arr [ i ] );
  }

  float ave = averageOdd ( arr, len );

  printf ( "The average is: %.2f\n", ave );

  return 0;
}

float averageOdd ( int arr [ ], int size ) {
  int sum = 0;
  int count = 0;

  for ( int i = 0; i < size; ++i )
    if ( arr [ i ] % 2 != 0 ) {
      sum += arr [ i ];
      count++;
    }
  
  return count > 0 ? (float)sum / count : 0;
}
```
Notice that I used the ternary operator for the return statement of the `averageOdd` function. You could also do this instead:
```c
if ( count > 0 )
        return ( float ) sum / count;
    else
        return 0;
```

---
### Sample Outputs:
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/odd_numbers_average/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/odd_numbers_average/sampleOutput2.PNG)
- ![sample output 3](https://github.com/zoreladrean/C-language-codes/blob/main/odd_numbers_average/sampleOutput3.PNG)