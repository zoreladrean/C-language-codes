#include <stdio.h>

void removeDuplicateElements ( int *a, int len );

int main ( void ) {

  int sizeOfArr;

  printf ( "Enter the size of the array: " );
  scanf ( "%d", &sizeOfArr );

  int array [ sizeOfArr ];

  printf ( "Enter the elements of the array: " );

  for ( int i = 0; i < sizeOfArr; i++ )
    scanf ( "%d", &array [ i ] );
  
  printf ( "The unique elements in the array are:" );

  removeDuplicateElements ( array, sizeOfArr );

  return 0;
}

void removeDuplicateElements ( int *a, int len ) {

  int size = len;

  for ( int i = 0; i < size; i++ ) //tracks current element being checked
    for ( int j = i + 1; j < size; j++ ) //looks for duplicates of current element
      if ( *( a + i ) == *( a + j ) ) {
        for ( int k = j; k < size - 1; k++ ) //shifts array elements left when duplicate found
          *( a + k ) = *( ( a + k ) + 1 );
        size--;
        j--;
      }

  for ( int i = 0; i < size; i++ )
    printf ( " %d", *( a + i ) );
}