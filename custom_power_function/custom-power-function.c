#include <stdio.h>

int calcPower ( int base, int exp );

int main ( void ) {
int base, exp;

printf ( "Enter the base number: " );
scanf ( "%d", &base );

printf ( "Enter exponent number: " );
scanf ( "%d", &exp );

printf ( "%d to the power of %d is %d", base, exp, calcPower ( base, exp ) );

return 0;
}

int calcPower ( int base, int exp ) {
    int result = 1, counter;
    for ( counter = 0; counter < exp; counter++) {
        result *= base;
    }
    return result;
}