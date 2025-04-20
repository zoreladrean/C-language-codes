#include <stdio.h>
#include <math.h>

int main ( void ) {

    int number;

    printf ( "Let's check if the number is an Armstrong number of not.\n" );
    printf ( "Enter a number: " );
    scanf ( "%d", &number );

    int A = number;
    int counter = 0;

    while ( A != 0 ) {
        A /= 10; //we divide A by multiples of 10 here until it becomes zero
        counter++; //so that we know how many digits there are
    }

    int B = counter; //I think this isnt necesary, but you can try experimenting with the while loop below

    A = number; //this is why we didnt use the variable number in the first loop, so that we can use its value again to be assigned to variable A and recycle A to the second loop

    int remainder = 0;
    int sum = 0;
    int power = 0;

    while ( A != 0 ) {
        remainder = A % 10; //we are extracting the last digit of the number and assign it to remainder
        power = pow ( remainder, B ); //now we just assign the value of B which is counter, as an exponent to the current value of remainder
        sum += power; //and then add it to variable sum
        A /= 10; //and then we deduct a digit so we can continue for the next iteration. since A is in integer data type, any decimal points will be automatically excluded.
    }

    if ( number == sum )
        printf ( "%d is an Armstrong number.", number );
    else
        printf ( "%d is NOT an Armstrong number.", number );



    return 0;
}