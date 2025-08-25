#include <stdio.h>

int main ( void ) {

  int num, counter = 1, largest = 0, secondLargest = 0;

  while ( counter <= 10 ) {

    printf ( "Enter a number: " );
    scanf ( "%d", &num );

    if ( counter == 1 )
      largest = num;
    else
      if ( num > largest ) {
        secondLargest = largest;
        largest = num;
      }
      else
        if ( num > secondLargest )
          if ( num != largest )
            secondLargest = num;
    
    counter++;
  }

  printf ( "\nLargest number: %d", largest );
  printf ( "\nSecond largest: %d", secondLargest );

  return 0;
}