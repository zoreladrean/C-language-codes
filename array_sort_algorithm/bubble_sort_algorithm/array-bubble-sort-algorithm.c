#include <stdio.h>

void sortArray ( int array [ ], int size );
void printArray ( int array [ ], int size );

int main ( void ) {

  int arr [ ] = { 2,3,47846,73686,625,728,123,15,4,158,8,6155,357,86,12,651,8,615,523,587,89,156,58,48,5,136,84,6,89,61,68,8,61,8,5,123,6,584,146765,};

  int size = sizeof ( arr ) / sizeof ( arr [ 0 ] );

  sortArray ( arr, size );
  printArray ( arr, size );

  return 0;
}

void sortArray ( int array [ ], int size ) {

  int i, j, temp;

  for ( int i = 0; i < size - 1; i++ ) //outer loop controls the number of passes
    for ( j = 0; j < size - i - 1; j++ ) //inner loop compares adjacent elements
      if ( array [ j + 1 ] < array [ j ] ) { //then we swap the elements if they're in the wrong order
        temp = array [ j ];
        array [ j ] = array [ j + 1 ];
        array [ j + 1 ] = temp;
      }
}

void printArray ( int array [ ], int size ) {

  for ( int i = 0; i < size; i++ ) {
    printf ( "%6d", array [ i ] ); //prints elements with 6-character width

    if ( i != size - 1 ) //print a comma after every number
      printf ( ", " );
    if ( ( i + 1 ) % 5 == 0 ) //print a newline after every 5 elements
      printf ( "\n" );
  }
}