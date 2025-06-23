# Min-Max Finder
This program finds the minimum and maximum values in a user-defined integer array using a separate function with pointer parameters.

---
-   Takes user input for array size and elements
-   Implements pointer parameters to return multiple values
-   Efficient single-pass algorithm
-   Handles both positive and negative integers

---
### Code:
```c
#include <stdio.h>

void findMinMax ( int arr [ ], int size, int *min, int *max );

int main ( void ) {

  int numOfArr;

  printf ( "How many numbers you want to input? " );
  scanf ( "%d", &numOfArr );

  int array [ numOfArr ];

  for ( int i = 0; i < numOfArr; i++ ) {
    printf ( "Enter number %d.) ", i + 1 );
    scanf ( "%d", &array [ i ] );
  }

  int min = array [ 0 ], max = array [ 0 ]; //initialize minimum and maximum

  findMinMax ( array, numOfArr, &min, &max );

  printf ( "\nMinimum: %d", min );
  printf ( "\nMaximum: %d", max );

  return 0;
}

void findMinMax ( int arr [ ], int size, int *min, int *max ) {
  *min = *max = arr [ 0 ]; //initialize with first element
  for ( int i = 1; i < size; i++ ) {
    if ( arr [ i ] > *max )
      *max = arr [ i ]; //update max if current element is larger
    if ( arr [ i ] < *min )
      *min = arr [ i ]; //update min if current element is smaller
  }
}
```

---

### Sample Outputs:
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/find_min_max_array/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/find_min_max_array/sampleOutput2.PNG)