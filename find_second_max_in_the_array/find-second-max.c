#include <stdio.h>
#include <stdlib.h>

int* secondMax ( int arr [ ], int size );

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