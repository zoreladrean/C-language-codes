#include <stdio.h>

void sortThreeNumbers ( int *a, int *b, int *c );

int main ( void ) {

  int a, b, c;

  printf ( "\nEnter three numbers in any order: " );
  scanf ( "%d%d%d", &a, &b, &c );

  //we pass the value by reference to the function
  sortThreeNumbers ( &a, &b, &c );

  printf ( "\nThe sorted numbers are: %d, %d, %d\n", a, b, c );

  return 0; 
}

void sortThreeNumbers ( int *a, int *b, int *c ) {

  int temp; //temporary variable

  if ( *a > * b ) {
    temp = *a;
    *a = *b;
    *b = temp;
  }

  if ( *a > *c ) {
    temp = *a;
    *a = *c;
    *c = temp;
  }

  if ( *b > *c ) {
    temp = *b;
    *b = *c;
    *c = temp;
  }
}