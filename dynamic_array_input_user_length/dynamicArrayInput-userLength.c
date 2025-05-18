#include <stdio.h>

void getIntegers ( int integers [ ], int len );

int main ( void ) {

  int len;

  printf ( "How many integers do you want to input? " );
  scanf ( "%d", &len );
  
  int integers [ len ];

  getIntegers ( integers, len );


  printf ( "\n\nThe numbers you entered are:\n" );
  for ( int i = 0; i < len; i++ )
    printf ( "%d. %d\n", i + 1, integers [ i ] );
}

void getIntegers ( int integers [ ], int len ) {

  int i = 0;
  do {
    printf ( "Enter integer number %d: ", i + 1 );
    scanf ( "%d", &integers [ i ] );
    i++;
  } while ( i < len );

}