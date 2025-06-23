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

  int min = array [ 0 ], max = array [ 0 ];

  findMinMax ( array, numOfArr, &min, &max );

  printf ( "\nMinimum: %d", min );
  printf ( "\nMaximum: %d", max );

  return 0;
}

void findMinMax ( int arr [ ], int size, int *min, int *max ) {
  *min = *max = arr [ 0 ];
  for ( int i = 1; i < size; i++ ) {
    if ( arr [ i ] > *max )
      *max = arr [ i ];
    if ( arr [ i ] < *min )
      *min = arr [ i ];
  }
}