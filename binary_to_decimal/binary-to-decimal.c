#include <stdio.h>
#include <math.h>

int main ( void ) {

    int binary;

    printf ( "Enter binary number: " );
    scanf ( "%d", &binary );

    int counter1 = 0;
    int A = binary; //we assign the value of binary to A because we still need to use binary's value later

    while ( A != 0 ) {
        A /= 10;
        counter1++;
    }

    int remainder = 0;
    int power = 0;
    int sum = 0;
    for ( int counter2 = 0; counter2 < counter1; counter2++ ) {
        remainder = binary % 10;
        power = ( pow ( ( remainder * 2 ), counter2 ) ) * remainder ;
        sum += power;
        binary /= 10;
    }
    printf ( "Decimal Equivalent = %d", sum );

    return 0;
}