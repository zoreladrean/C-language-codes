#include <stdio.h>

void mergeArrays ( int *a, int lenA, int *b, int lenB, int *c );

int main ( void ) {

  int arrayA [ ] = { 1, 2, 3, 4, 5, 6 };
  int arrayB [ ] = { 7, 8, 9, 10, 11, 12 };
  int sizeA = sizeof ( arrayA ) / sizeof ( arrayA [ 0 ] );
  int sizeB = sizeof ( arrayB ) / sizeof ( arrayB [ 0 ] );
  int combineAB [ sizeA + sizeB ];
  int sizeC = sizeof ( combineAB ) / sizeof ( combineAB [ 0 ] );

  mergeArrays ( arrayA, sizeA, arrayB, sizeB, combineAB );

  for ( int i = 0; i < sizeC; i++ )
    printf ( "%d ", combineAB [ i ] );

  return 0;
}

void mergeArrays ( int *a, int lenA, int *b, int lenB, int *c ) {

  int i = 0, j = 0, k = 0;

  while ( i < lenA )
    *( c + ( k++ ) ) = *( a + ( i++ ) );

  while ( j < lenB )
    *( c + ( k++ ) ) = *( b + ( j++ ) );
}

