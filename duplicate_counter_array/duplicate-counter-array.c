#include <stdio.h>

int countDuplicate ( int *a, int len );

int main ( void ) {

  int num;

  printf ( "How many elements you want to enter? " );
  scanf ( "%d", &num );

  int arr [ num ];

  printf ( "\nEnter the elements:\n" );
  for ( int i = 0; i < num; i++ ) {
    printf ( "Element %d: ", i + 1 );
    scanf ( "%d", &arr[ i ] );
  }

  int numOfDups = countDuplicate ( arr, num );

  printf ( "\nThe number of duplicates in the array is %d", numOfDups );

  return 0;
}

int countDuplicate ( int *a, int len ) {
  int counter = 0;

  for ( int i = 0; i < len - 1; i++ )
    for ( int j = i + 1; j < len; j++ )
      if ( *( a + i ) == *( a + j ) )
        counter++;

  return counter;
}