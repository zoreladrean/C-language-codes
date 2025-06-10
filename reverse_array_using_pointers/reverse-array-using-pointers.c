#include <stdio.h>

void reverseArrayFunction ( int *array, int size );

int main ( void ) {

  int arraySize;

  printf ( "Enter the size of the array: " );
  scanf ( "%d", &arraySize );

  int array [ arraySize ];

  printf ( "Enter the elements of the array: " );

  for ( int i = 0; i < arraySize; i++ )
    scanf ( "%d", &array [ i ] );

  printf ( "The reverse of the array is: " );

  reverseArrayFunction ( array, arraySize );

  for ( int i = 0; i < arraySize; i++ )
    printf ( "%d ", array [ i ] );

  return 0;
}

void reverseArrayFunction ( int *array, int size ) {
  int temp;
  int *start = array; //pointer to first element
  int *end = array + size - 1; //pointer to last element

  while ( start < end ) {
    //swap elements using pointers
    temp = *start;
    *start = *end;
    *end = temp;
    
    //move pointers to the center
    start++;
    end--;
  }
}