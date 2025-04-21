#include <stdio.h>

int main ( void ) {

    int n, digitcounter = 0;

    printf ( "Enter an integer: " );
    scanf ( "%d", &n );

    if ( n < 0 )
        n = -n; //with this condition, if the user enters a negative number, it converts n to its positive equivalent by multiplying it by -1

    while ( n != 0 ) {
        digitcounter++;
        n /= 10;
    }

    printf ( "Number of digits: %d", digitcounter );

    return 0;
}