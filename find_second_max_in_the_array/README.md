# Second Maximum Finder

This program finds the second largest number in an array using pointer and dynamic memory.

---
-   Uses pointers to track values without extra variables
-   Returns  `NULL`  if all numbers are identical
-   Dynamically allocates just the right amount of memory
-   Works with any array size 
-   Gracefully handles arrays with duplicate values
-   Finds the answer in a single pass through the array
---
### Function secondMax() :
```c
int* secondMax ( int arr [ ], int size ) {

  // initialize max and second max as null
  int *max = NULL, *secondMax = NULL;

  //traverse the array
  for ( int i = 0; i < size; i++ ) {

    if ( max == NULL || arr [ i ] > *max ) {
      // if the element is greater than max,
      secondMax = max; // update second max to max
      max = &arr [ i ]; // and max to the current element
    }
    else
      if ( secondMax == NULL || arr [ i ] > *secondMax ) {
        // if the element is greater than second max and not equal to max
        if ( arr [ i ] != *max )
          secondMax = &arr [ i ]; // update second max
      }
  }

  return secondMax;
}
```
> **Max Pointer**: Always points to the biggest number found so far
> **SecondMax Pointer**: Chases right behind, tracking the second biggest

### Main function:
```c
int main ( void ) {

  int size;
  printf ( "Enter the size of the array: " );
  scanf ( "%d", &size );

  if ( size < 2 ) {
    printf ( "Array must be at least 2 elements!!\n" );
    return 1; // exit the program
  }

  int *arr = ( int * ) malloc ( size * sizeof ( int ) );
  printf ( "Enter the elements of the array:\n" );
  for ( int i = 0; i < size; i++ )
    scanf ( "%d", &arr [ i ] );

  int *secMax = secondMax ( arr, size );

  if ( secMax )
    printf ( "The second maximum value in the array is: %d\n", *secMax );
  else
    printf ( "Couldn't find the second maximum value.\n" );

  free ( arr );

  return 0;
}
```
---
### Sample Outputs:
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/find_second_max_in_the_array/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/find_second_max_in_the_array/sampleOutput2.PNG)