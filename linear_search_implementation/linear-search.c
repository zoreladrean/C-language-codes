#include <stdio.h>

int funcFindNum ( int a [ ], int size, int find );

int main ( void ) {

  int arr [ ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int findNum;
  int len = sizeof ( arr ) / sizeof ( arr [ 0 ] );

  printf ( "Enter a number to find: " );
  scanf ( "%d", &findNum );

  int found = funcFindNum ( arr, len, findNum );
  if ( found > 0 )
    printf ( "The number %d is in index %d", findNum, found );
  else
    printf ( "%d is not in the list.", findNum );

  return 0;
}

int funcFindNum ( int a [ ], int size, int find ) {
  for ( int i = 0; i < size; i++ ) 
    if ( a [ i ] == find )
      return i;
  
  return -1;
}